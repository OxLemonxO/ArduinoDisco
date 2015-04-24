
/*
Designed by OxLemonxO. IO pins are 5 and 6.
*/

//Define led array pons and the loop delay.
int ledarray1 = 6;
int ledarray2 = 5;
int LoopDelay = 200;
//Setup Led array pins
void setup() {
pinMode(ledarray1, OUTPUT);
pinMode(ledarray2, OUTPUT);
}
//Loop the disco function
void loop() {
disco();
}
//Disco function
static void disco() {
  digitalWrite(ledarray1, HIGH);
  delay(LoopDelay);
  digitalWrite(ledarray1, LOW);
  digitalWrite(ledarray2, HIGH);
  delay(LoopDelay);
  digitalWrite(ledarray2, LOW);
}
