#define IRSensor 8

void setup()
{
  pinMode(IRSensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  bool no_obstacle = digitalRead(IRSensor); //The digitalRead function reads as "True" if there is no obstacle
  if (no_obstacle == false)                 //And if there is an obstacle the reading comes as false
                                            //This makes it very complicating and hard to work with                                                  
  {
    Serial.println("Stop and turn");
    delay(1000);
  }
  delay(200);
}
