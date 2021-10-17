void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  move_forward(); // These are called "Functions"
  move_left();    // A function relates to a piece of code somewhere in the sketch.
  move_backward();// For example if we take move_forward it's in the bottom part of the sketch as "void move_forward"
  move_right();   // So basically a function triggers a piece of code somewhere in the sketch
  move_backward();
  move_left();  
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
  delay(500);
  reset_motion();
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
