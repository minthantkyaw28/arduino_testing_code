//Water lvl v1 

// const int sensorPin = A0; // Analog input pin for water level sensor
// const int ledPin = 13; // Digital output pin for LED
// const int buzzerPin = 11; // Digital output pin for buzzer

// void setup() {
//   pinMode(ledPin, OUTPUT);
//   pinMode(buzzerPin, OUTPUT);
//   Serial.begin(9600); // Initialize serial communication for debugging
// }

// void loop() {
//   int sensorValue = analogRead(sensorPin); // Read the water level sensor
//   Serial.print("Sensor value: ");
//   Serial.println(sensorValue); // Output sensor value to serial monitor for debugging

//   if (sensorValue > 500) { // Water is detected
//     digitalWrite(ledPin, HIGH); // Turn on LED
//     digitalWrite(buzzerPin, HIGH); // Turn on buzzer
//     delay(1000); // Wait for 1 second
//     digitalWrite(ledPin, LOW); // Turn off LED
//     digitalWrite(buzzerPin, LOW); // Turn off buzzer
//   }
//   delay(100); // Wait for 0.1 second before checking the sensor again
// }

//Water lvl v2 
// const int sensorPin = A0; // Analog input pin for water level sensor
// const int ledPin = 12; // Digital output pin for LED
// const int buzzerPin = 11; // Digital output pin for buzzer
// int prevSensorValue = 0; // Variable to store the previous sensor value

// void setup() {
//   pinMode(ledPin, OUTPUT);
//   pinMode(buzzerPin, OUTPUT);
//   Serial.begin(9600); // Initialize serial communication for debugging
// }

// void loop() {
//   int sensorValue = analogRead(sensorPin); // Read the water level sensor
//   Serial.print("Sensor value: ");
//   Serial.println(sensorValue); // Output sensor value to serial monitor for debugging

//   if (sensorValue > prevSensorValue) { // Water level is rising
//     digitalWrite(ledPin, HIGH); // Turn on LED
//     digitalWrite(buzzerPin, HIGH); // Turn on buzzer
//   } else { // Water level is not rising
//     digitalWrite(ledPin, LOW); // Turn off LED
//     digitalWrite(buzzerPin, LOW); // Turn off buzzer
//   }
//   prevSensorValue = sensorValue; // Store the current sensor value as the previous value for the next loop

//   delay(100); // Wait for 0.1 second before checking the sensor again
// }

//Water lvl v3 
const int sensorPin = A0; // Analog input pin for water level sensor
const int greenLedPin = 11; // Digital output pin for green LED
const int yellowLedPin = 10; // Digital output pin for yellow LED
const int redLedPin = 9; // Digital output pin for red LED
const int buzzerPin = 8; // Digital output pin for buzzer

void setup() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the water level sensor
  Serial.print("Sensor value: ");
  //Serial.println(sensorValue); // Output sensor value to serial monitor for debugging

  if (sensorValue >= 600) { // Water level is high
    digitalWrite(greenLedPin, HIGH); // Turn on green LED
    digitalWrite(yellowLedPin, LOW); // Turn off yellow LED
    digitalWrite(redLedPin, LOW); // Turn off red LED
    digitalWrite(buzzerPin, LOW); // Turn off buzzer
    Serial.println("Sensor value is = "+String(sensorValue)+" It is high !!!"); 
  } else if (sensorValue > 400 && sensorValue < 600) { // Water level is medium
    digitalWrite(greenLedPin, LOW); // Turn off green LED
    digitalWrite(yellowLedPin, HIGH); // Turn on yellow LED
    digitalWrite(redLedPin, LOW); // Turn off red LED
    digitalWrite(buzzerPin, LOW); // Turn off buzzer
    Serial.println("Sensor value is = "+String(sensorValue)+" It is medium !!!"); 
  } else { // Water level is low
    digitalWrite(greenLedPin, LOW); // Turn off green LED
    digitalWrite(yellowLedPin, LOW); // Turn off yellow LED
    digitalWrite(redLedPin, HIGH); // Turn on red LED
    digitalWrite(buzzerPin, HIGH); // Turn on buzzer
    Serial.println("Sensor value is = "+String(sensorValue)+" It is Low !!!"); 
  }

  delay(100); // Wait for 0.1 second before checking the sensor again
}

