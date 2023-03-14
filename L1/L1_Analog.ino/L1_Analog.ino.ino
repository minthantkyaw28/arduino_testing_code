int pin9=9;
int brightness = 0;

void setup() {

  pinMode(pin9,OUTPUT);

}

void loop() {
 
//  // Increase brightness from 0 to 255 in steps of 5
//   for (brightness = 0; brightness <= 255; brightness += 5) {
//     analogWrite(pin9, brightness); // Set LED brightness
//     delay(50); // Wait for 50ms
//   }

//   // Decrease brightness from 255 to 0 in steps of 5
//   for (brightness = 255; brightness >= 0; brightness -= 5) {
//     analogWrite(pin9, brightness); // Set LED brightness
//     delay(50); // Wait for 50ms
//   }

LedDimmer(pin9,70,10);

}


void LedDimmer(int PinNUM,int delayTime,int step){
   for (brightness = 0; brightness <= 255; brightness += step) {
    analogWrite(PinNUM, brightness); // Set LED brightness
    delay(delayTime); // Wait for 50ms
  }

  // Decrease brightness from 255 to 0 in steps of 5
  for (brightness = 255; brightness >= 0; brightness -= step) {
    analogWrite(PinNUM, brightness); // Set LED brightness
    delay(delayTime); // Wait for 50ms
  }
}