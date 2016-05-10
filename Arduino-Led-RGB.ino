const int pinRed   = 3;
const int pinGreen = 5;
const int pinBlue  = 6;

void setup() {
  pinMode (pinRed,OUTPUT);
  pinMode (pinGreen,OUTPUT);
  pinMode (pinBlue,OUTPUT);
}

void loop() {
  // Start Red color
  powerMyLed(1,0,0);
  delay(1000);

  //Start Green color
  powerMyLed(0,1,0);
  delay(1000);

  // Start Blue color
  powerMyLed(0,0,1);
  delay(1000);

  // Start Purple color
  powerMyLed(1,0,1);
  delay(1000);

  // Start Yellow color
  powerMyLed(1,1,0);
  delay(1000);

  // Start Light Blue color
  powerMyLed(0,1,1);
  delay(1000);

  // Start White color
  powerMyLed(1,1,1);
  delay(1000);
}

void powerMyLed(int Red, int Green, int Blue) {
 if (Red==1) {
  digitalWrite(pinRed,HIGH);
 } else { 
  digitalWrite(pinRed, LOW);
 }

 if (Green==1) {
  digitalWrite(pinGreen,HIGH);
 } else { 
  digitalWrite(pinGreen, LOW);
 }

 if (Blue==1) {
  digitalWrite(pinBlue,HIGH);
 } else { 
  digitalWrite(pinBlue, LOW);
 }
}
