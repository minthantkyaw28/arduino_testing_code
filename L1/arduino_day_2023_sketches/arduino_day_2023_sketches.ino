// C++ code
//

const int pin9=9;
const int pin8=8;

void setup()
{
  pinMode(pin9, OUTPUT);
   pinMode(pin8, OUTPUT);
}

void loop()
{
  digitalWrite(pin9, HIGH);
  digitalWrite(pin8, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(pin9, LOW);
  digitalWrite(pin8, HIGH);
  delay(500); 
  // Wait for 1000 millisecond(s)
}