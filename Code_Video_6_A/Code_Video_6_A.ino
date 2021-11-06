#include <NewPing.h>
#define TRIGGER_PIN  9
#define ECHO_PIN     10
#define MAX_DISTANCE 400 //This is the max distance for the HC-SR04 Ultrasonic Sensor
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(9600);
}
 
void loop() {
  Serial.print("Distance is: ");
  Serial.println(sonar.ping_cm());
  delay(1000);
}