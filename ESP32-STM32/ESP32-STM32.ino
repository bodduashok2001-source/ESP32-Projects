#define ESP32_RX2 16   // connect STM32 TX (PA2) here
#define ESP32_TX2 17   // connect STM32 RX (PA3) here

void setup() {
  Serial.begin(115200); // for printing to PC
  delay(2000);
  Serial2.begin(115200, SERIAL_8N1, ESP32_RX2, ESP32_TX2); // STM32 link

  Serial.println("ESP32 ready. Waiting for STM32 data...");
}

void loop() {
  // data from STM32
  if (Serial2.available()) {
    String data = Serial2.readStringUntil('\n');
    Serial.print("STM32: ");
    Serial.println(data);
  }

  // OPTIONAL: if user types to PC, forward to STM32
  if (Serial.available()) {
    char cmd = Serial.read();
    Serial2.write(cmd); 
  }
}
