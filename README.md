# Sanitary Napkin Vending Machine (ESP32-S3)

This project implements a **sanitary napkin vending machine** using the **ESP32-S3-WROOM-1** module.  
The system supports RFID authentication, vending control, and display updates.

---

## 📌 Features
- ✅ ESP32-S3 as main controller  
- ✅ RFID tag authentication for vending  
- ✅ Real-time display updates (LCD/LED)  
- ✅ Tracks vend count and updates status after each use  
- ✅ Internet connectivity (future scope: cloud/server sync)

---


---

## ⚙️ Setup & Build Instructions

### Requirements
- [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32s3/get-started/index.html) installed  
- VS Code with **ESP-IDF extension**  
- ESP32-S3 DevKit (N8 or N8R8 variant)  

### Build Steps
1. Clone or create this project in your workspace.
2. Open project folder in **VS Code**.
3. Set the target to **ESP32-S3**:
   ```sh
   idf.py set-target esp32s3
