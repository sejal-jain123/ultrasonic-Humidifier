#  Ultrasonic Humidifier Control System

This project demonstrates a dual-mode control system for an **ultrasonic humidifier**, which can be toggled **remotely via Bluetooth (HC-05)** or **manually using a push button**. An **Arduino Uno (ATmega328P)** is used as the main controller, switching the humidifier through a **MOSFET**, with an **LED status indicator**.

---

##  Features

- 🔘 Manual control using push button
- 📱 Wireless control via Bluetooth (HC-05)
- 💡 Status LED to indicate ON/OFF state
- 💻 Embedded C code for Arduino (well-commented)
- 🧠 Designed for low cost and low power
- 📐 Production-ready KiCAD schematic and PCB

---

## Components Used

| Component              | Description                           |
|------------------------|---------------------------------------|
| Arduino Uno R3         | Microcontroller (ATmega328P)          |
| HC-05 Module           | Bluetooth communication               |
| Ultrasonic Humidifier | 12V/24V mist generator module         |
| IRF540N MOSFET         | Power switch for humidifier           |
| Push Button            | Manual control                        |
| Status LED             | Visual ON/OFF feedback                |
| 10kΩ Resistors         | Pull-up/pull-down                     |
| 220Ω Resistor          | LED current limiting                  |
| Capacitors             | Decoupling (100nF)                    |
| Power Supply           | External (12V for humidifier, 5V for Arduino) |

---

## ⚙️ How It Works

1. Pressing the **button** toggles the humidifier ON/OFF.
2. Sending **"ON"** or **"OFF"** commands over Bluetooth also toggles the humidifier.
3. A **MOSFET** acts as a switch to power the humidifier.
4. An **LED** shows the current state (ON = glowing, OFF = off).

---


