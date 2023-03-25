// C++ code
//

// 2 Leds 
// const int pin9=9;
// const int pin8=8;

// void setup()
// {
//   pinMode(pin9, OUTPUT);
//    pinMode(pin8, OUTPUT);
// }

// void loop()
// {
//   digitalWrite(pin9, HIGH);
//   digitalWrite(pin8, LOW);
//   delay(500); // Wait for 1000 millisecond(s)
//   digitalWrite(pin9, LOW);
//   digitalWrite(pin8, HIGH);
//   delay(500); 
//   // Wait for 1000 millisecond(s)
// }

//Blink built in 13 
// 13 == LED_BUILTIN
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  // Wait for 1000 millisecond(s)
}