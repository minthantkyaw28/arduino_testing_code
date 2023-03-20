int LDR = A0; // LDR is connected to analog pin A0
int buzzer = 8; // Buzzer is connected to digital pin 8
int led = 13; // LED is connected to digital pin 13

void setup() {
  pinMode(led, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int LDR_value = analogRead(LDR); // Read LDR value
  Serial.println("LDR value is = "+String(LDR_value)); // Print LDR value to serial monitor
  delay(50); // Wait for a moment

  if (LDR_value < 600) { // If LDR value is greater than 800
    digitalWrite(buzzer, HIGH); // Turn on the buzzer
    digitalWrite(led, HIGH); // Turn on the LED
    delay(100); // Wait for 1 second
    digitalWrite(buzzer, LOW); // Turn off the buzzer
    digitalWrite(led, LOW);
    delay(100);// Turn off the LED
  }
}
