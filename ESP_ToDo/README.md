# 📚 ESP32 Telegram Study Reminder

A simple ESP32 project that sends a Telegram reminder message at a fixed time interval using Wi-Fi. This project demonstrates how ESP32 can communicate with the Telegram Bot API to create a basic IoT reminder system.

## 🚀 Features

- Connects ESP32 to a Wi-Fi network
- Sends automatic Telegram notifications
- Uses Telegram Bot API over HTTPS
- Simple timer-based reminder using `millis()`
- Easy to customize reminder interval and message

## 🛠️ Hardware Required

- ESP32 Development Board
- USB Cable
- Wi-Fi Connection

## 📦 Libraries Used

Install the following libraries from the Arduino Library Manager:

- WiFi
- WiFiClientSecure
- UniversalTelegramBot

Everything is contained in a single Arduino sketch.

## ⚙️ Setup

### 1. Create a Telegram Bot

- Open **@BotFather** on Telegram.
- Create a new bot.
- Copy the Bot Token.

### 2. Get Your Chat ID

- Send a message to your bot.
- Find your Chat ID using a Telegram Chat ID bot or the Telegram API.

### 3. Update the Code

Replace the following values in the sketch:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

#define BOTtoken "YOUR_BOT_TOKEN"
#define CHAT_ID "YOUR_CHAT_ID"
```

### 4. Set Reminder Interval

Modify the reminder interval if needed.

```cpp
unsigned long taskTime = 60 * 1000;   // 60 seconds
```

Example:

- `60 * 1000` → 1 minute
- `300 * 1000` → 5 minutes
- `3600000` → 1 hour

### 5. Upload the Code

- Select your ESP32 board.
- Choose the correct COM port.
- Upload the sketch.

## ▶️ How It Works

1. ESP32 connects to your Wi-Fi.
2. A secure HTTPS connection is established.
3. Every configured interval, the ESP32 sends a Telegram message.
4. The reminder appears instantly in your Telegram chat.

## 📄 License

This project is created for learning and educational purposes.