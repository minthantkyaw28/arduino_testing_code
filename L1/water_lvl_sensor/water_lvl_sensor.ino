//Water lvl v1 

const int sensorPin = A0; // Analog input pin for water level sensor
const int ledPin = 13; // Digital output pin for LED
const int buzzerPin = 11; // Digital output pin for buzzer

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the water level sensor
  Serial.print("Sensor value: ");
  Serial.println(sensorValue); // Output sensor value to serial monitor for debugging

  if (sensorValue > 500) { // Water is detected
    digitalWrite(ledPin, HIGH); // Turn on LED
    digitalWrite(buzzerPin, HIGH); // Turn on buzzer
    delay(1000); // Wait for 1 second
    digitalWrite(ledPin, LOW); // Turn off LED
    digitalWrite(buzzerPin, LOW); // Turn off buzzer
  }
  delay(100); // Wait for 0.1 second before checking the sensor again
}

