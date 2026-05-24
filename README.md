# Arduino_Projects
--Traffic Light system --
It contains some Basic Arduino projects 
Traffic Light Controller (Arduino)This project is a simple Arduino-based Traffic Light Controller that simulates a standard traffic light sequence using three LEDs.

Project Overview
  The program controls three LEDs (Red, Yellow, and Green) connected to specific digital pins on an Arduino board. It cycles through a timed sequence mimicking       real-world traffic signals, including a flashing yellow warning sequence during the transition phases.
  
Hardware Requirements:
    Arduino Board (e.g., Uno, Nano,   Mega)
    LEDs: 1 Red, 1 Yellow, 1 Green
    Resistors: 3x 220Ω (or 330Ω) resistors for the LEDs
    Breadboard and Jumper wires 

Wiring Guide
    Connect your components to the following digital pins:
    LEDColor      |     Arduino Pin
    Red                   Pin 9
    Yellow                Pin 8
    Green                 Pin 7

-- Auto Light system --
//Light-Sensitive Automatic Night Light (Arduino)
  This project is a simple, automated light system that uses an LDR (Light Dependent Resistor) to detect ambient light levels and automatically trigger an LED when the environment becomes dark.
 Project Overview:
              The project constantly monitors light intensity. When the sensor detects that the surroundings have become dark (i.e., the analog signal drops                    below a specific threshold), it automatically switches an LED on. It is an excellent beginner project to learn about analog sensors, threshold                    logic, and GPIO control.
 Hardware Requirements:
               Arduino Board (e.g., Uno, Nano)LDR (Photoresistor)LEDResistors:10kΩ resistor (for the voltage divider circuit with the LDR)220Ω resistor (to                      protect the LED)Breadboard and Jumper wires
  Wiring Guide:
              To make the LDR work, it must be part of a voltage divider circuit.
              LDR Pin1: 5V
              LDR Pin2: Analog Pin A0 (also connect a 10kΩ resistor from here to GND)
              LED Anode: (+)Digital Pin 8 (via 220Ω resistor)
              LED Cathode: (-)GND
  How it WorksAnalog Reading: 
              The Arduino continuously reads the voltage from the LDR on pin A0 using analogRead().Threshold Logic: The sensorValue (ranging from 0 to 1023) is                 evaluated by an if statement.Automatic Response:Dark (Value < 150): The condition is met, and the Arduino sends HIGH to pin 8, turning the LED                    ON.Light (Value >= 150): The else block executes, sending LOW to pin 8, turning the LED OFF.
