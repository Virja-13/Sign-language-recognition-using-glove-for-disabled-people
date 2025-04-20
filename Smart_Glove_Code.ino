#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int sensor_0 = 0;
int sensor_1 = 0;
String lastSign = "";

void setup() {
  lcd.begin(16, 2); 
  lcd.print("Sign Language");
  
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(8, OUTPUT);
  
  Serial.begin(9600);
  delay(3000);
  lcd.clear();
}

void loop() {
  sensor_0 = analogRead(A0);
  sensor_1 = analogRead(A1);

  String currentSign = "";

  if (sensor_1 < 20 && sensor_0 < 20) {
    currentSign = "What's your name?? ";
  } else if (sensor_1 < 20) {
    currentSign = "I need help ";
  } else if (sensor_0 < 20) {
    currentSign = "Hello ";
  } else {
    currentSign = "Not Detected ";
  }

  if (currentSign != lastSign) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(currentSign);
    lastSign = currentSign;
  }

  Serial.print("Sensor A0: ");
  Serial.println(sensor_0);
  Serial.print(" | Sensor A1: ");
  Serial.println(sensor_1);

  delay(1000);  
}

