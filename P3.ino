int switches[] = {2,12};
int leds[] = {3,5,6,9,10,11};
int reading1 = 0;
int reading2 = 0;
int time = 250;

void setup() {
  for (int i= 3; 3>=i>=11; i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(switches[0],INPUT);
  pinMode(switches[1],INPUT);
}
void loop() {
reading1 = digitalRead(switches[0]);
  if (reading1 == HIGH) {
   analogWrite(leds[0],128);
   analogWrite(leds[1],128);
  }
  else {
   analogWrite(leds[0],0);
   analogWrite(leds[1],0);
  }
reading2 = digitalRead(switches[1]);
  if (reading2 == HIGH) {
   analogWrite(leds[3],128);
   analogWrite(leds[5],128);
  }
  else {
   analogWrite(leds[3],0);
   analogWrite(leds[5],0);
  }
}