const int analog_read_flame=A0;

const int LED=13;
const int BUZZER=8;

int analog_read_value=0;




void setup() {

  Serial.begin(9600); 

  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);

  pinMode(analog_read_flame,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analog_read_value=analogRead(analog_read_flame);

  if(analog_read_value<100){
    Serial.println("On Fire");
    digitalWrite(LED,1);
    digitalWrite(BUZZER,1);
    delay(100);
  }else{
    Serial.println("No Fire at all !");
    digitalWrite(LED,0);
    digitalWrite(BUZZER,0);
    delay(100);
  }
}
