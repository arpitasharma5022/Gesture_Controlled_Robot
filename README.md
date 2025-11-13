# 🤖 Gesture-Controlled Robot using Arduino & RF Modules

A wireless robotic car that moves based on **hand gestures** detected by an **accelerometer sensor**.  
The system uses **RF communication** between a **transmitter (hand unit)** and a **receiver (robot car)** to control motion.

---

## ⚙️ Features

- 🖐️ Hand gesture-based motion control  
- 📡 Wireless communication via 433 MHz RF modules  
- ⚙️ Real-time motor control using L293D driver  
- 🔋 Portable and low-cost prototype  
- 🚗 Four movement modes: Forward, Backward, Left, Right  

---

## 🧰 Components

| Component | Quantity | Description |
|------------|-----------|-------------|
| Arduino UNO | 2 | One for transmitter, one for receiver |
| Accelerometer (ADXL335 / MPU6050) | 1 | Detects hand tilt gestures |
| RF Tx/Rx Modules (433 MHz) | 1 pair | Wireless communication |
| L293D Motor Driver | 1 | Controls DC motors |
| DC Motors | 2 | Robot wheels |
| Battery Pack | 2 | Power supply for both units |

---

## 📂 Folder Structure

Gesture_Controlled_Robot/
├── Transmitter/
│ └── transmitter.ino
├── Receiver/
│ └── receiver.ino
└── README.md


---

## ⚡ Working Principle

1. **Transmitter Unit** reads hand tilt values from the accelerometer.  
2. It encodes motion direction (Forward, Backward, Left, Right, Stop).  
3. The RF Transmitter sends this data wirelessly to the receiver module.  
4. The **Receiver Unit** decodes the signal and drives motors accordingly using the **L293D**.  
5. The robot moves in real time as the hand tilts.

---

## 🧠 Gesture Mapping

| Gesture | Robot Movement |
|----------|----------------|
| Hand Forward | Move Forward |
| Hand Backward | Move Backward |
| Hand Left Tilt | Turn Left |
| Hand Right Tilt | Turn Right |
| Hand Flat | Stop |

---

## 🧩 Libraries Used

- [VirtualWire](https://www.airspayce.com/mikem/arduino/VirtualWire/) – for RF communication

---

## 🔋 Power Supply

- Transmitter: 9 V battery  
- Receiver: 12 V (for motors) + 5 V for Arduino  

---

## 🧾 Applications

- Gesture-controlled robots  
- Robotics education projects  
- Assistive mobility systems  
- Wireless robot navigation  

---

## 👩‍💻 Author

**Arpita Sharma**  
📧 [arpitasharma5022@gmail.com](mailto:arpitasharma5022@gmail.com)  
🎓 Electronics and Communication Engineering, JNGEC Sundarnagar  
🔗 [LinkedIn](https://www.linkedin.com/in/arpita-sharma-686044358/)
