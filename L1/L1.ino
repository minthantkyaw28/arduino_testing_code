
int led13=13;
int count=0;

void setup() {
  // put your setup code here, to run once:
  //pinMode(led13,OUTPUT);

  // Serial.begin(9600);
}

void loop() {
  //blinker(led13,700);

  count=count+1;

  Serial.print("Hello World !");
  Serial.print(count);
  Serial.print("\n");
  
  delay(1000);
}


// Custom Funcs
void blinker(int pinNUM,int delayTime){
  digitalWrite(pinNUM,HIGH);
  delay(delayTime);
  digitalWrite(pinNUM,LOW);
  delay(delayTime);
}
