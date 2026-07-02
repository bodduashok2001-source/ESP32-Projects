# 📊 ESP32 ThingSpeak Data Upload

A simple ESP32 project that uploads data to **ThingSpeak** over Wi-Fi using HTTP. This example demonstrates how to send sensor values (or sample data) to a ThingSpeak channel for real-time monitoring and visualization.

## 🚀 Features

* Connects ESP32 to a Wi-Fi network
* Uploads data to ThingSpeak using HTTP
* Uses ThingSpeak Write API Key
* Easy to replace sample data with real sensor readings

## 🛠️ Hardware Required

* ESP32 Development Board
* USB Cable
* Wi-Fi Connection

## 📦 Libraries Used

The project uses the built-in Arduino ESP32 libraries:

* WiFi
* HTTPClient

Everything is contained in a single Arduino sketch.

## ⚙️ Setup

### 1. Create a ThingSpeak Channel

* Sign in to **ThingSpeak**.
* Create a new channel.
* Add at least one field (e.g., Field 1).
* Save the channel.

### 2. Get Your Write API Key

* Open your ThingSpeak channel.
* Navigate to the **API Keys** tab.
* Copy the **Write API Key**.

### 3. Update the Code

Replace the following values in the sketch:

```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

String apiKey = "YOUR_WRITE_API_KEY";
const char* server = "http://api.thingspeak.com/update";
```

### 4. Upload the Code

* Open the sketch in Arduino IDE.
* Select your ESP32 board.
* Choose the correct COM port.
* Upload the sketch.

### 5. View the Data

* Open your ThingSpeak channel.
* Navigate to **Private View** or **Public View**.
* Observe the uploaded data plotted on the graph.

## ▶️ How It Works

1. ESP32 connects to the Wi-Fi network.
2. A random value is generated (replace it with your sensor data if needed).
3. The ESP32 sends the value to ThingSpeak using an HTTP GET request.
4. ThingSpeak stores and displays the received data as a graph.
5. The process repeats every 15 seconds.

## 📈 Example Data Upload

```
Field1 = 27
Field1 = 31
Field1 = 24
Field1 = 38
```

## 📝 Note

ThingSpeak requires a minimum upload interval of **15 seconds** between consecutive updates when using the free service.

## 📄 License

This project is created for learning and educational purposes.
