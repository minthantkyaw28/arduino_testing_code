//Developed by Min Thant Kyaw

// V1 - relay and AC led 

// // Define the pin that controls the relay
// int relayPin = 2;

// void setup() {
//   // Set the relay pin as an output
//   pinMode(relayPin, OUTPUT);
// }

// void loop() {
//   // Turn on the relay
//   digitalWrite(relayPin, HIGH);
//   delay(2000); // Wait for 1 second

//   // Turn off the relay
//   digitalWrite(relayPin, LOW);
//   delay(2000); // Wait for 1 second
// }


// V2 - relay, LDR and AC led 

const int relayPin = 2; // Define the pin that controls the relay
const int LDR = A0; // Define the pin that receive data from analog pin 
const int buzzer = 7; // Buzzer is connected to digital pin 8
const int LED = 13; // led is connected to digital pin 13

void setup() {

  pinMode(relayPin, OUTPUT); // Set the relay pin as an output
  pinMode(LDR, INPUT); // Set the A0 pin as input
  pinMode(buzzer, OUTPUT); // Set the buzzer pin as an output
  pinMode(LED, OUTPUT); // Set the led pin as an output

  Serial.begin(9600); // Initialize serial communication

}

void loop() {
  
 int LDR_PIN_VALUE=analogRead(LDR); //Read analog data from A0
 Serial.println("LDR value is = "+String(LDR_PIN_VALUE)); // Print LDR value to serial monitor
//  delay(500); // Wait for a moment

 ldr_relay_led(LDR_PIN_VALUE,LED,buzzer,relayPin);

}

void ldr_relay_led(int LDR_PIN_VALUE, int LED, int BUZZER, int RELAY_PIN){
 
  if (LDR_PIN_VALUE < 600) { 
    
   
    digitalWrite(BUZZER, HIGH); // Turn off the buzzer
    digitalWrite(LED, LOW);
    digitalWrite(RELAY_PIN, LOW);
  }else{

  digitalWrite(BUZZER, LOW); // Turn on the buzzer
  digitalWrite(LED, HIGH);  // Turn on the LED
  digitalWrite(RELAY_PIN, HIGH); // Turn on the AC LED

  }

}
