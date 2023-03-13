
int led13=13;
int led8=8;
int led4=4;
int led7=7;

int count=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led13,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led7,OUTPUT);

  Serial.begin(9600);
}

void loop() {

  blinker(led7,1000,500);
  blinker(led13,1000,500);
  blinker(led8,1000,500);
  blinker(led4,1000,500);

  // count=count+1;

  // Serial.print("Hello World !");
  // Serial.print(count);
  // Serial.print("\n");
  
  // delay(1000);
}


// Custom Funcs
void blinker(int pinNUM,int ONdelayTime,int OFFdelayTime){
  digitalWrite(pinNUM,HIGH);
  Serial.print("LED number ");
  Serial.print(pinNUM);
  Serial.print(" IS ON \n");
  delay(ONdelayTime);

  digitalWrite(pinNUM,LOW);
  Serial.print("LED number ");
  Serial.print(pinNUM);
  Serial.print(" IS OFF \n");
  delay(OFFdelayTime);

}
