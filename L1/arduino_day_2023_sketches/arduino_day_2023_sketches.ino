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

const int led7=7;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
pinMode(led7, OUTPUT);

}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(led7,LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(led7,HIGH);
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);  // Wait for 1000 millisecond(s)
}