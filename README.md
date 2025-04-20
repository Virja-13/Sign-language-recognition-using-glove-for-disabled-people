# Sign-language-recognition-using-glove-for-disabled-people
The Smart Sign Language Recognition Glove aims to bridge communication gaps for hearing and speech-impaired individuals. The system accurately detects hand gestures using flex sensors, processes the sensor data using a microcontroller, and classifies gestures into corresponding text or speech output using a machine learning model. This prototype offers real-time translation to facilitate smoother and more inclusive communication.

**Prerequisites**
To work with this prototype, you will need:

●**Software:** Arduino IDE (version 1.8.13 or later).
●	**Libraries or Dependencies:**
○	LiquidCrystal library (for LCD display).
●	**Hardware Requirements:**
  ○	Arduino Uno 
  ○	Potentiometer
  ○	2 Flex Sensors.
  ○	LCD Display (16x2).
  ○	Resistors.
  ○	Breadboard and Connecting Wires.
 
**Installation**

**Steps to Set Up the Prototype:**
●	Download and install the Arduino IDE from the official Arduino website.
●	Clone the repository containing the code for the project:
  	git clone https://github.com/Virja-13/Sign-language-recognition-using-glove-for-disabled-people
●	Install the required libraries for Arduino:
  ○	Open the Arduino IDE.
  ○	Go to Sketch > Include Library > Manage Libraries....
  ○	LiquidCrystal library (for LCD display)

**How to Run**
1.Connect the hardware components as per the provided circuit diagram. 
2.Open the Arduino IDE.
3.Upload the provided code to the Arduino Uno board:
●	Open the .ino file in the Arduino IDE.
●	Select the correct Board and Port under the Tools menu.
●	Click on the Upload button. Once uploaded, power the Arduino and observe the system in action:
●	Wear the Glove.
●	Perform hand gestures corresponding to sign language numbers or letters.
●	The LCD displays the recognized gesture as text
