// void setup() {
//   // put your setup code here, to run once:

// }

// void loop() {
//   // put your main code here, to run repeatedly:

// }


int LED = 13; // Use the onboard Uno LED
int buzzer=8;
int isObstaclePin = 7;  // This is our input pin
int isObstacle =0;  // HIGH MEANS NO OBSTACLE

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);  
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);

  if (isObstacle == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);
     delay(200);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED, LOW);
     digitalWrite(buzzer, LOW);
     delay(200);
  }
}