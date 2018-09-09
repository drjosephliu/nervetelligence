#include <Servo.h>

Servo servo;

int reading;  
const int movementSpeed = 20;
const int delayBetweenSwipes = 3000;
int pos = 0;
int initialPos = 20;
 
void setup(void) {
  Serial.begin(9600);   
  // Serve is attached at pin 9.
  servo.attach(9); 
  // Initial point for servo is at 20 degrees.
  servo.write(initialPos); 
}
 
void loop(void) {
  reading = analogRead(A0); //attached to analog 0
  Serial.print("Sensor value = ");
  Serial.println(reading);
  
  // If pressure is neglible, do not agitate servo motor.
  if (reading <= 100) {
    return;
  }
  
  delay(delayBetweenSwipes / 2);
  for(pos = 0; pos <= 40; pos += 2) {
    servo.write(pos);
    delay(movementSpeed);
  }
  
  delay(delayBetweenSwipes);
  for (pos = 40; pos >= 0; pos -= 2) {
    servo.write(pos);
    delay(movementSpeed);
  }
  delay(delayBetweenSwipes);
} 