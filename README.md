# Obstacle Avoiding Bot 🤖

*************************************

# Step 1 - What You Need in This Project:

- Arduino UNO
- Smart Robot Car Chassis With 2 X Toy Car Wheels And 1 X Universal 
- Wheel (or Ball Casters)
- Two DC Motors
- L298n Motor Driver
- HC-SR04 Ultrasonic Sensor + Mounting Bracket
- TowerPro Micro Servo 9g
- 7.4V 1300mah Lipo Battery
- Jumper Wires (male-to-male, Male-to-female)
- Mini Breadboard
- Soldering Iron
- Screws And Nuts
- Screwdriver
- Double Sided Tape(optional)
- Hot Glue Gun(optional)

*************************************

## Step 2 - Assembling the Chassis:

Solder two wires to each DC motor. Then fix two motors to the chassis using the screws. Finally attach the Universal wheel (or ball caster wheel)

*************************************

## Step 3 - Mounting the remaining Components:

Mount the Arduino ,L298n and the Servo on the chassis.Plug four jumper wires to the Ultrasonic sensor and mount it on its bracket. Then mount the bracket on the Servo.

*************************************

## Step 4 - The Wiring:
```
L298n motor driver:

+12V → Lipo battery (+)

GND → Lipo battery (- ) important: connect the GND to lipo battery (-) and to arduino board any GND pin

+5V → arduino Vin

In1 → arduino digital pin 7

In2 → arduino digital pin 6

In3 → arduino digital pin 5

In4 → arduino digital pin 4

OUT1 → Motor 1

OUT2 → Motor 1

OUT3 → Motor 2

OUT4 → Motor 2

Breadboard:

Connect two jumper wires to arduino board 5V and GND pins, then connect both wires to breadboard. now you can use this as +5V supply.

HC-SR04 Ultrasonic Sonar sensor:

VCC → breadboard +5V

Trig → arduino analog pin 1

Echo → arduino analog pin 2

GND → breadboard GND

TowerPro micro servo 9g:

orange wire → arduino digital pin 10

red wire → breadboard +5V

brown wire → breadboard GND
```

*************************************

## Step 5 - The Programming:

1. Download and Install the Arduino Desktop IDE
   * [Windows](https://www.arduino.cc/en/Guide/Windows)
   * [Mac OS X](https://www.arduino.cc/en/Guide/MacOSX)
   * [Linux](https://www.arduino.cc/en/Guide/Linux)
2. Download and paste NewPing library (Ultrasonic sensor function library) file to the Arduino libraries folder.
3. Download the [NewPing Library](https://content.instructables.com/FL3/9GSI/K9AB4822/FL39GSIK9AB4822.rar) 
4. Extract it to the path - "C:\Arduino\libraries"
5. Download and open Full_robot.ino
6. UVerify the code first and wait for it to finish , now we can upload it to the board>.

*************************************

## Step 6 - Powering the Robot
```
Connect the Lipo battery to the L298n motor driver as follows:

Lipo battery (+) → +12V

Lipo battery (- ) → GND
```

*************************************

## Step 7 - Now we're good to go

Now your robot is ready to avoid any obstacle....

Lets hve some fun !!!
