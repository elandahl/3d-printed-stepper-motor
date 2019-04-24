
int analogInPin = A2;  // connect to one revolution potentiometer for speed and direction control

void setup()  // full-stepping for 3d printed stepper motor E. Landahl April 24 2019
{
  pinMode(0,OUTPUT); // coil 1
  pinMode(1,OUTPUT); // coil 2
  pinMode(2,OUTPUT); // coil 3
  pinMode(3,OUTPUT); // coil 4
  pinMode(analogInPin,INPUT);
}

void loop()
{
  int analogIn = analogRead(analogInPin);  
  if  (analogIn < 500) {  // move clockwise
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(analogIn);
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(analogIn);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(analogIn);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(analogIn);
  }
  else if (analogIn > 524) {    // move counter-clockwise
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay((1024-analogIn));
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay((1024-analogIn));
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay((1024-analogIn));
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay((1024-analogIn)); 
  }
}
