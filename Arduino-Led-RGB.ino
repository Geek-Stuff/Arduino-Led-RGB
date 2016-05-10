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
  digitalRGB(1,0,0);
  delay(1000);

  //Start Green color
  digitalRGB(0,1,0);
  delay(1000);

  // Start Blue color
  digitalRGB(0,0,1);
  delay(1000);

  // Start Purple color
  digitalRGB(1,0,1);
  delay(1000);

  // Start Yellow color
  digitalRGB(1,1,0);
  delay(1000);

  // Start Light Blue color
  digitalRGB(0,1,1);
  delay(1000);

  // Start White color
  digitalRGB(1,1,1);
  delay(1000);

  // Start analog Red
  for (int i=0; i<=255; i++) {
    analogRGB(i,0,0);
    delay(10);
  }

  // Start analog Red to Blue
  for (int i=0; i<=255; i++) {
    analogRGB(255-i,0,i);
    delay(10);
  }

  // Start analog Blue to Green
  for (int i=0; i<=255; i++) {
    analogRGB(0,i,255-i);
    delay(10);
  }

  // Start analog Green to Red
  for (int i=0; i<=255; i++) {
    analogRGB(i,255-i,0);
    delay(10);
  }
}

void digitalRGB(int Red, int Green, int Blue) {
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

void analogRGB(int Red, int Green, int Blue) {
 analogWrite(pinRed, Red);
 analogWrite(pinGreen, Green);
 analogWrite(pinBlue, Blue);
}
