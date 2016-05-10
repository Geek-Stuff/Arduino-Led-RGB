const int Red   = 3;
const int Green = 5;
const int Blue  = 6;

void setup() {
  pinMode (Red,OUTPUT);
  pinMode (Green,OUTPUT);
  pinMode (Blue,OUTPUT);
}

void loop() {
  // Start Red color
  digitalWrite(Red,HIGH);
  delay(1000); 
  digitalWrite(Red,LOW);

  //Start Green color
  digitalWrite(Green,HIGH);
  delay(1000); 
  digitalWrite(Green,LOW);

  // Start Blue color
  digitalWrite(Blue,HIGH);
  delay(1000); 
  digitalWrite(Blue,LOW);
}
