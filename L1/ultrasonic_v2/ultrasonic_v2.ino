// Define the pins for the ultrasonic sensor
const int trigPin = 9;
const int echoPin = 10;
const int LedPin = 13;
const int BuzzerPin=8;

// Define variables for distance measurement
long duration;
int distance;

void setup() {
  // Initialize the serial communication for debugging
  Serial.begin(9600);

  // Define the pin modes for the ultrasonic sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(LedPin, OUTPUT);
  pinMode(BuzzerPin, OUTPUT);
}

void loop() {
  // Send a pulse to the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the duration of the echo signal
  duration = pulseIn(echoPin, HIGH);

  // Calculate the distance in centimeters
  distance = duration * 0.034 / 2 / 100;

  // Print the distance to the serial monitor
   Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" m");

  if(distance<1){
    digitalWrite(LedPin,HIGH);
    digitalWrite(BuzzerPin,HIGH);
  }else{
    digitalWrite(LedPin,LOW);
    digitalWrite(BuzzerPin,LOW);    
  }

  // Wait for a short time before taking another measurement
  delay(100);
}