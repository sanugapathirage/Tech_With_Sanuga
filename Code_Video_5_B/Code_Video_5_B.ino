#define IRSensor 8

void setup() {
  Serial.begin(9600);
  pinMode(IRSensor, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  move_backward(); // Move for 100ms 
  bool no_obstacle = digitalRead(IRSensor); //The digitalRead function reads as "True" if there is no obstacle
                                            //And if there is an obstacle the reading comes as false
                                            //This makes it very complicating and hard to work with
  if (no_obstacle == false)          // Then check obstacle is there                                                         
  {
    Serial.println("Obstacle Detected");
    no_obstacle = true;
    reset_motion();
    move_right_180();
    delay(1000); 
  } 
}

void reset_motion(){    // This reset_motion function stops all 4 motors
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  delay(200); // This delay is to give some time for the motors to stop. 
              // Keep it atleast above 200ms or the code will not function as intended
}

void move_forward(){     //This is a Function
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  delay(500); // This delay determines how much time the motors will rotate. Here 500ms means 0.5 seconds.
  reset_motion();
}

void move_backward(){
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  delay(5);
}

void move_right(){
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  delay(500);
  reset_motion();
}

void move_left(){
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(500);
  reset_motion();
}

void move_right_180(){
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  delay(600);
  reset_motion();
}
