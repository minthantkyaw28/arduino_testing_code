int ledPins[] = {13, 12, 8, 7, 4}; // Set LED pins
int ledCount = sizeof(ledPins) / sizeof(int); // Count number of LEDs

void setup() {
  for (int i = 0; i < ledCount; i++) {
    pinMode(ledPins[i], OUTPUT); // Set LED pins as output
  }
}

void loop() {
  // for (int i = 0; i < ledCount; i++) {
  //   digitalWrite(ledPins[i], HIGH); // Turn all LEDs on
  // }
  // delay(500); // Wait for 500ms
  // for (int i = 0; i < ledCount; i++) {
  //   digitalWrite(ledPins[i], LOW); // Turn all LEDs off
  // }
  // delay(500); // Wait for 500ms

UnisonBlinker(ledCount,1000);
  
}


void UnisonBlinker(int ledCount,int delayTime){

   for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn all LEDs on
  }
  delay(delayTime); // Wait 
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], LOW); // Turn all LEDs off
  }
  delay(delayTime); // Wait

}