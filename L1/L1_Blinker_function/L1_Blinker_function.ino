
int led13=13;
int led12=12;
int led8=8;
int led7=7;
int led4=4;

int count=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led13,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led4,OUTPUT);

  Serial.begin(9600);
}

void loop() {


  blinker(led13,1000,500);
  blinker(led12,1000,500);
  blinker(led8,1000,500);
  blinker(led7,1000,500);
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
  Serial.println("LED number "+String(pinNUM)+" IS ON.");
  delay(ONdelayTime);

  digitalWrite(pinNUM,LOW);
  Serial.println("LED number "+String(pinNUM)+" IS OFF.");
  delay(OFFdelayTime);

}
