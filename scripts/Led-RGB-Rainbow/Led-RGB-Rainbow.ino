const int pinRed   = 3;
const int pinGreen = 5;
const int pinBlue  = 6;

int state = 0;
int r = 255;
int g = 0;
int b = 0;

void setup() {
  pinMode (pinRed,OUTPUT);
  pinMode (pinGreen,OUTPUT);
  pinMode (pinBlue,OUTPUT);
}

void loop() {
  switch (state) {
    case 0:
      g++;
      if(g == 255)
          state = 1;
      break;
      
    case 1:
      r--;
      if(r == 0)
          state = 2;
      break;
      
    case 2:
      b++;
      if(b == 255)
          state = 3;
      break;
      
    case 3:
      g--;
      if(g == 0)
          state = 4;
      break;
      
    case 4:
      r++;
      if(r == 255)
          state = 5;
      break;
      
    case 5:
      b--;
      if(b == 0)
          state = 0;
      break;
  }
  
  analogRGB(r, g, b);
  delay(20);
}

void analogRGB(int Red, int Green, int Blue) {
 analogWrite(pinRed, Red);
 analogWrite(pinGreen, Green);
 analogWrite(pinBlue, Blue);
}

