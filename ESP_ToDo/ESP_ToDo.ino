#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

// --------- WiFi Details ----------
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// --------- Telegram Details ----------
#define BOTtoken "YOUR_BOT_TOKEN"
#define CHAT_ID "YOUR_CHAT_ID"

WiFiClientSecure client;
UniversalTelegramBot bot(BOTtoken, client);

// --------- To-Do Settings ----------
unsigned long taskTime = 60 * 1000;
unsigned long lastTime = 0;

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi Connected");

  client.setInsecure();  // needed for Telegram
}

void loop() {
  if (millis() - lastTime >= taskTime) {
    bot.sendMessage(CHAT_ID, "📚 It is time for Programming Study", "");
    lastTime = millis();
  }
}