# 📚 ESP32 STM32 UART Bridge

A simple ESP32 project that demonstrates UART communication with an STM32 using `Serial2`. The ESP32 receives data from the STM32 and displays it on the Serial Monitor. It can also forward characters typed in the Serial Monitor back to the STM32.

## 🚀 Features

- UART communication between ESP32 and STM32
- Displays STM32 messages on the Serial Monitor
- Sends Serial Monitor input back to STM32
- Uses ESP32 `Serial2`

## 🛠️ Hardware Required

- ESP32 Development Board
- STM32 Development Board
- USB Cable
- Jumper Wires

## 🔌 Hardware Connections

| ESP32 | STM32 |
|--------|--------|
| GPIO16 (RX2) | TX (PA2) |
| GPIO17 (TX2) | RX (PA3) |
| GND | GND |

> Ensure both boards share a common ground.

## ⚙️ UART Configuration

- Baud Rate: **115200**
- Data Bits: **8**
- Parity: **None**
- Stop Bits: **1**

## 🚀 Setup

### 1. Connect the Hardware

Wire the ESP32 and STM32 as shown in the connection table above.

### 2. Upload the STM32 Program

Upload your STM32 firmware that transmits UART data on **PA2** and receives data on **PA3**.

### 3. Upload the ESP32 Program

- Open the sketch in Arduino IDE.
- Select your ESP32 board.
- Choose the correct COM port.
- Upload the sketch.

### 4. Open the Serial Monitor

- Set the baud rate to **115200**.
- Reset the ESP32 if necessary.

## ▶️ How It Works

1. ESP32 initializes `Serial2` on GPIO16 and GPIO17.
2. STM32 sends UART data to the ESP32.
3. ESP32 reads each line and prints it on the Serial Monitor.
4. Characters typed in the Serial Monitor are forwarded to the STM32.

## 💻 Example Output

```
ESP32 ready. Waiting for STM32 data...
STM32: Hello from STM32
STM32: Sensor Value = 123
STM32: LED ON
```

## 📄 License

This project is created for learning and educational purposes.