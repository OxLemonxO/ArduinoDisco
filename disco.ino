
/*
Designed by OxLemonxO and some smexay coding done by xPacks. IO pins are 5 and 6.
*/

// Define led array pons and the loop delay.
int ledArray1 = 6;
int ledArray2 = 5;
// Setup Led array pins
void setup() {
pinMode(ledArray1, OUTPUT);
pinMode(ledArray2, OUTPUT);
}
// Loop the disco function
void loop() {
disco();
}
// Disco function
void disco() {
  digitalWrite(ledArray1, HIGH);
  delay(200);
  digitalWrite(ledArray1, LOW);
  digitalWrite(ledArray2, HIGH);
  delay(200);
  digitalWrite(ledArray2, LOW);
}
