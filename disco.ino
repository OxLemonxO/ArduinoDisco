/* i like cheese
*/

//Define led array pons and the loop delay.
int ledarray1 = 6;
int ledarray2 = 5;
int LoopDelay = 200;
//Setup Led array pins
void setup() {
pinMode(ledarray1, OUTPUT);
pinMode(ledarray2, OUTPUT);
Serial.begin(9600);
}
//Loop the disco function
void loop() {
disco();
Serial.println("i like cheese");
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
