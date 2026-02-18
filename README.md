# 🛣️ Arduino Line Follower Robot

A simple **Arduino-based line follower robot** using **two IR sensors** and an **L293D/L298 motor driver**.  
The robot follows a black/white line by adjusting motor speeds based on sensor input.

---

## 🧠 How It Works

- Uses **two IR sensors** (Left & Right)
- Continuously checks sensor states
- Adjusts motor movement to stay on the line
- Stops when no line is detected

---

## 🛠️ Hardware Required

- Arduino Uno / Nano  
- L293D or L298 Motor Driver  
- 2 × DC Motors  
- IR Line Sensors (Left & Right)  
- Robot chassis + wheels  
- External battery supply  
- Jumper wires  

---

## 🔌 Pin Configuration

### Motor Driver Pins
| Arduino Pin | Function |
|------------|----------|
| 5 | ENA (Motor A Enable) |
| 6 | IN1 |
| 7 | IN2 |
| 9 | IN3 |
| 10 | IN4 |
| 8 | ENB (Motor B Enable) |

### Line Sensors
| Arduino Pin | Sensor |
|------------|--------|
| 12 | Right Sensor |
| 13 | Left Sensor |

---

## ⚙️ Motor Speed

- **Left Motor Speed:** PWM 110  
- **Right Motor Speed:** PWM 90  

Speed is controlled using `analogWrite()`.

---

## 🛣️ Line Following Logic

| Left Sensor | Right Sensor | Action |
|------------|-------------|--------|
| LOW | LOW | Move Forward |
| LOW | HIGH | Turn Left |
| HIGH | LOW | Turn Right |
| HIGH | HIGH | Stop |

---

## ▶️ How to Use

1. Upload the code to Arduino  
2. Place the robot on a line track  
3. Power the motors using an external battery  
4. The robot will automatically follow the line  

---

## 📂 File Structure

Line-Follower-Robot/
│
├── line_follower.ino
└── README.md


---

## 🚀 Future Improvements

- PID control for smoother turns  
- Adjustable speed via potentiometer  
- Obstacle detection integration  
- Bluetooth mode switching  

---

## 👤 Author

**Soban Saeed**  
Arduino • Robotics • Embedded Systems
