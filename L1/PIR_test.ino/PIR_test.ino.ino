int pirPin = 2; // Define PIR sensor pin
int ledPin = 13; // Define LED pin
int buzzarPin=4;

void setup() {
  pinMode(pirPin, INPUT); // Set PIR sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(buzzarPin, OUTPUT); 
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int pirState = digitalRead(pirPin); // Read PIR sensor state
  
  if (pirState == HIGH) { // If motion is detected
    digitalWrite(ledPin, HIGH); // Turn on LED
    digitalWrite(buzzarPin, HIGH); 
    Serial.println("Motion detected!"); // Print message to serial monitor
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
    digitalWrite(buzzarPin, LOW); 
    Serial.println("Motionless !");
  }
  
  delay(10); // Wait for 100ms before reading PIR sensor again
}
