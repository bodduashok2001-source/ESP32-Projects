#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

String apiKey = "YOUR_WRITE_API_KEY";
const char* server = "http://api.thingspeak.com/update";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\n✅ WiFi connected!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    // send random data (you can replace with real sensor value)
    String url = String(server) + "?api_key=" + apiKey + "&field1=" + String(random(20,40));
    http.begin(url);
    int httpCode = http.GET();

    if (httpCode > 0) {
      Serial.println("✅ Data sent to ThingSpeak!");
    } else {
      Serial.println("❌ Send failed!");
    }

    http.end();
  } else {
    Serial.println("WiFi disconnected!");
  }

  delay(15000);  // must wait ≥15 s between uploads
}

// Execution: Using MATLAB Think Speak website