const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

const int buzzerPin = 8; // Digital Pin 8
const int ledPin1 = 12;  // Digital Pin 12
const int ledPin2 = 13;  // Digital Pin 13 Built In Led can Change it if you want

int counter = 0;

void setup()
{
  //Setup pin modes
  pinMode(buzzerPin, OUTPUT); // Digital Pin 8
  pinMode(ledPin1, OUTPUT);  // Digital Pin 12
  pinMode(ledPin2, OUTPUT); // Digital Pin 13 Built In Led can Change it if you want
}

void loop()
{

  //Play first section
  firstSection();

  //Play second section
  secondSection();

  //Variant 1
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 350);  
  beep(a, 125);
  beep(cH, 500);
  beep(a, 375);  
  beep(cH, 125);
  beep(eH, 650);

  delay(500);

  //Repeat second section
  secondSection();

  //Variant 2
  beep(f, 250);  
  beep(gS, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 500);  
  beep(f, 375);  
  beep(cH, 125);
  beep(a, 650);  

  delay(650);
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);

  //Play different LED depending on value of 'counter'
  if(counter % 2 == 0)
  {
    digitalWrite(ledPin1, HIGH);
    delay(duration);
    digitalWrite(ledPin1, LOW);
  }else
  {
    digitalWrite(ledPin2, HIGH);
    delay(duration);
    digitalWrite(ledPin2, LOW);
  }

  //Stop tone on buzzerPin
  noTone(buzzerPin);

  delay(50);

  //Increment counter
  counter++;
}

void firstSection()
{
  beep(a, 500);
  beep(a, 500);    
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);  
  beep(a, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);

  beep(eH, 500);
  beep(eH, 500);
  beep(eH, 500);  
  beep(fH, 350);
  beep(cH, 150);
  beep(gS, 500);
  beep(f, 350);
  beep(cH, 150);
  beep(a, 650);

  delay(500);
}

void secondSection()
{
  beep(aH, 500);
  beep(a, 300);
  beep(a, 150);
  beep(aH, 500);
  beep(gSH, 325);
  beep(gH, 175);
  beep(fSH, 125);
  beep(fH, 125);    
  beep(fSH, 250);

  delay(325);

  beep(aS, 250);
  beep(dSH, 500);
  beep(dH, 325);  
  beep(cSH, 175);  
  beep(cH, 125);  
  beep(b, 125);  
  beep(cH, 250);  

  delay(350);
}

// #define NOTE_B0  31
// #define NOTE_C1  33
// #define NOTE_CS1 35
// #define NOTE_D1  37
// #define NOTE_DS1 39
// #define NOTE_E1  41
// #define NOTE_F1  44
// #define NOTE_FS1 46
// #define NOTE_G1  49
// #define NOTE_GS1 52
// #define NOTE_A1  55
// #define NOTE_AS1 58
// #define NOTE_B1  62
// #define NOTE_C2  65
// #define NOTE_CS2 69
// #define NOTE_D2  73
// #define NOTE_DS2 78
// #define NOTE_E2  82
// #define NOTE_F2  87
// #define NOTE_FS2 93
// #define NOTE_G2  98
// #define NOTE_GS2 104
// #define NOTE_A2  110
// #define NOTE_AS2 117
// #define NOTE_B2  123
// #define NOTE_C3  131
// #define NOTE_CS3 139
// #define NOTE_D3  147
// #define NOTE_DS3 156
// #define NOTE_E3  165
// #define NOTE_F3  175
// #define NOTE_FS3 185
// #define NOTE_G3  196
// #define NOTE_GS3 208
// #define NOTE_A3  220
// #define NOTE_AS3 233
// #define NOTE_B3  247
// #define NOTE_C4  262
// #define NOTE_CS4 277
// #define NOTE_D4  294
// #define NOTE_DS4 311
// #define NOTE_E4  330
// #define NOTE_F4  349
// #define NOTE_FS4 370
// #define NOTE_G4  392
// #define NOTE_GS4 415
// #define NOTE_A4  440
// #define NOTE_AS4 466
// #define NOTE_B4  494
// #define NOTE_C5  523
// #define NOTE_CS5 554
// #define NOTE_D5  587
// #define NOTE_DS5 622
// #define NOTE_E5  659
// #define NOTE_F5  698
// #define NOTE_FS5 740
// #define NOTE_G5  784
// #define NOTE_GS5 831
// #define NOTE_A5  880
// #define NOTE_AS5 932
// #define NOTE_B5  988
// #define NOTE_C6  1047
// #define NOTE_CS6 1109
// #define NOTE_D6  1175
// #define NOTE_DS6 1245
// #define NOTE_E6  1319
// #define NOTE_F6  1397
// #define NOTE_FS6 1480
// #define NOTE_G6  1568
// #define NOTE_GS6 1661
// #define NOTE_A6  1760
// #define NOTE_AS6 1865
// #define NOTE_B6  1976
// #define NOTE_C7  2093
// #define NOTE_CS7 2217
// #define NOTE_D7  2349
// #define NOTE_DS7 2489
// #define NOTE_E7  2637
// #define NOTE_F7  2794
// #define NOTE_FS7 2960
// #define NOTE_G7  3136
// #define NOTE_GS7 3322
// #define NOTE_A7  3520
// #define NOTE_AS7 3729
// #define NOTE_B7  3951
// #define NOTE_C8  4186
// #define NOTE_CS8 4435
// #define NOTE_D8  4699
// #define NOTE_DS8 4978

// // Leds

// #define led1 12
// #define led2 11
// #define led3 10
// #define led4 9
// #define led5 8
// #define led6 7
// #define led7 6
// #define led8 5

// //Sweet Child O Mine - Guns N Roses-------------------------------------------------------------------------------------------------------------------------------
// // Notes
// int mainRiffD[] = {NOTE_D4 , NOTE_D5 , NOTE_A4, NOTE_G4, NOTE_G5, NOTE_A4, NOTE_FS5, NOTE_A4};
// int mainRiffE[] = {NOTE_E4 , NOTE_D5 , NOTE_A4, NOTE_G4, NOTE_G5, NOTE_A4, NOTE_FS5, NOTE_A4};
// int mainRiffG[] = {NOTE_G4 , NOTE_D5 , NOTE_A4, NOTE_G4, NOTE_G5, NOTE_A4, NOTE_FS5, NOTE_A4};

// int mainRiffDurations[] = {
// //d4  d5  a4   g4  g5  g4  fs5  a4  
//   6,  6,  6,   6,  6,  6,  6 ,  6};

// int mainRiffLeds[] = {led1, led2, led3, led4, led5, led6, led7, led8};

// // Buzzer
// int speakerPin = 13;

// //----------------------------------------------------------------------------------------------------------------------------------------------

// void ilumina(int note){
//   if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
//    digitalWrite(led1, HIGH);
//   } else if (note == NOTE_C4) {
//     digitalWrite(led2, HIGH);
//   } else if(note == NOTE_AS3) {
//     digitalWrite(led3, HIGH);
//   } else if (note == NOTE_DS4) {
//     digitalWrite(led4, HIGH);
//   } else if (note == NOTE_D4) {
//     digitalWrite(led7, HIGH);
//   } else if (note == NOTE_F4) {
//     digitalWrite(led8, HIGH);
//   } else if (note == NOTE_F3) {
//     digitalWrite(led5, HIGH);
//   } else if(note == NOTE_E4) {
//     digitalWrite(led6, HIGH);
//   }
// }

// void apaga(int note){
//   if(note == NOTE_G4 || note == NOTE_G3 || note == NOTE_GS3) {
//    digitalWrite(led1, LOW);
//   } else if (note == NOTE_C4) {
//     digitalWrite(led2, LOW);
//   } else if(note == NOTE_AS3) {
//     digitalWrite(led3, LOW);
//   } else if (note == NOTE_DS4) {
//     digitalWrite(led4, LOW);
//   } else if (note == NOTE_D4) {
//     digitalWrite(led7, LOW);
//   } else if (note == NOTE_F4) {
//     digitalWrite(led8, LOW);
//   } else if (note == NOTE_F3) {
//     digitalWrite(led5, LOW);
//   } else if(note == NOTE_E4) {
//     digitalWrite(led6, LOW);
//   }
// }

// void setup() {
//   pinMode(speakerPin, OUTPUT);
//   pinMode(led1, OUTPUT);
//   pinMode(led2, OUTPUT);
//   pinMode(led3, OUTPUT);
//   pinMode(led4, OUTPUT);
//   pinMode(led5, OUTPUT);
//   pinMode(led6, OUTPUT);
//   pinMode(led7, OUTPUT);
//   pinMode(led8, OUTPUT);
// }

// void SweetChildOMine () {
//   for(int introTwoTimes = 0; introTwoTimes < 2; introTwoTimes++){
//     for(int dTwice = 0; dTwice < 2; dTwice++){
//       for (int thisNote = 0; thisNote < 8; thisNote++){
//         int mainRiffDuration = 1000/mainRiffDurations[thisNote];
//         tone(speakerPin, mainRiffD[thisNote], mainRiffDuration);
//         digitalWrite(mainRiffLeds[thisNote], HIGH);
//         int pauseBetweenNotes = mainRiffDuration * 1.30;
//         delay(pauseBetweenNotes);
//         noTone(speakerPin);
//         digitalWrite(mainRiffLeds[thisNote], LOW);
//       }
//     }
    
//     for(int eTwice = 0; eTwice < 2; eTwice++){
//       for (int thisNote = 0; thisNote < 8; thisNote++){
//         int mainRiffDuration = 1000/mainRiffDurations[thisNote];
//         tone(speakerPin, mainRiffE[thisNote], mainRiffDuration);
//         digitalWrite(mainRiffLeds[thisNote], HIGH);
//         int pauseBetweenNotes = mainRiffDuration * 1.30;
//         delay(pauseBetweenNotes);
//         noTone(speakerPin);
//         digitalWrite(mainRiffLeds[thisNote], LOW);
//       }
//     }
    
//     for(int gTwice = 0; gTwice < 2; gTwice++){
//       for (int thisNote = 0; thisNote < 8; thisNote++){
//         int mainRiffDuration = 1000/mainRiffDurations[thisNote];
//         tone(speakerPin, mainRiffG[thisNote], mainRiffDuration);
//         digitalWrite(mainRiffLeds[thisNote], HIGH);
//         int pauseBetweenNotes = mainRiffDuration * 1.30;
//         delay(pauseBetweenNotes);
//         noTone(speakerPin);
//         digitalWrite(mainRiffLeds[thisNote], LOW);
//       }
//     }
    
//     for(int dTwice = 0; dTwice < 2; dTwice++){
//       for (int thisNote = 0; thisNote < 8; thisNote++){
//         int mainRiffDuration = 1000/mainRiffDurations[thisNote];
//         tone(speakerPin, mainRiffD[thisNote], mainRiffDuration);
//         digitalWrite(mainRiffLeds[thisNote], HIGH);
//         int pauseBetweenNotes = mainRiffDuration * 1.30;
//         delay(pauseBetweenNotes);
//         noTone(speakerPin);
//         digitalWrite(mainRiffLeds[thisNote], LOW);
//       }
//     }
//   }
// }

// void loop() {
//   SweetChildOMine();
// }


/* 
  Star Wars theme  
  Connect a piezo buzzer or speaker to pin 11 or select a new pin.
  More songs available at https://github.com/robsoncouto/arduino-songs                                            
                                              
                                              Robson Couto, 2019
*/

// #define NOTE_B0  31
// #define NOTE_C1  33
// #define NOTE_CS1 35
// #define NOTE_D1  37
// #define NOTE_DS1 39
// #define NOTE_E1  41
// #define NOTE_F1  44
// #define NOTE_FS1 46
// #define NOTE_G1  49
// #define NOTE_GS1 52
// #define NOTE_A1  55
// #define NOTE_AS1 58
// #define NOTE_B1  62
// #define NOTE_C2  65
// #define NOTE_CS2 69
// #define NOTE_D2  73
// #define NOTE_DS2 78
// #define NOTE_E2  82
// #define NOTE_F2  87
// #define NOTE_FS2 93
// #define NOTE_G2  98
// #define NOTE_GS2 104
// #define NOTE_A2  110
// #define NOTE_AS2 117
// #define NOTE_B2  123
// #define NOTE_C3  131
// #define NOTE_CS3 139
// #define NOTE_D3  147
// #define NOTE_DS3 156
// #define NOTE_E3  165
// #define NOTE_F3  175
// #define NOTE_FS3 185
// #define NOTE_G3  196
// #define NOTE_GS3 208
// #define NOTE_A3  220
// #define NOTE_AS3 233
// #define NOTE_B3  247
// #define NOTE_C4  262
// #define NOTE_CS4 277
// #define NOTE_D4  294
// #define NOTE_DS4 311
// #define NOTE_E4  330
// #define NOTE_F4  349
// #define NOTE_FS4 370
// #define NOTE_G4  392
// #define NOTE_GS4 415
// #define NOTE_A4  440
// #define NOTE_AS4 466
// #define NOTE_B4  494
// #define NOTE_C5  523
// #define NOTE_CS5 554
// #define NOTE_D5  587
// #define NOTE_DS5 622
// #define NOTE_E5  659
// #define NOTE_F5  698
// #define NOTE_FS5 740
// #define NOTE_G5  784
// #define NOTE_GS5 831
// #define NOTE_A5  880
// #define NOTE_AS5 932
// #define NOTE_B5  988
// #define NOTE_C6  1047
// #define NOTE_CS6 1109
// #define NOTE_D6  1175
// #define NOTE_DS6 1245
// #define NOTE_E6  1319
// #define NOTE_F6  1397
// #define NOTE_FS6 1480
// #define NOTE_G6  1568
// #define NOTE_GS6 1661
// #define NOTE_A6  1760
// #define NOTE_AS6 1865
// #define NOTE_B6  1976
// #define NOTE_C7  2093
// #define NOTE_CS7 2217
// #define NOTE_D7  2349
// #define NOTE_DS7 2489
// #define NOTE_E7  2637
// #define NOTE_F7  2794
// #define NOTE_FS7 2960
// #define NOTE_G7  3136
// #define NOTE_GS7 3322
// #define NOTE_A7  3520
// #define NOTE_AS7 3729
// #define NOTE_B7  3951
// #define NOTE_C8  4186
// #define NOTE_CS8 4435
// #define NOTE_D8  4699
// #define NOTE_DS8 4978
// #define REST      0


// // change this to make the song slower or faster
// int tempo = 108;

// // change this to whichever pin you want to use
// int buzzer = 11;

// // notes of the moledy followed by the duration.
// // a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// // !!negative numbers are used to represent dotted notes,
// // so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
// int melody[] = {
  
//   // Dart Vader theme (Imperial March) - Star wars 
//   // Score available at https://musescore.com/user/202909/scores/1141521
//   // The tenor saxophone part was used
  
//   NOTE_AS4,8, NOTE_AS4,8, NOTE_AS4,8,//1
//   NOTE_F5,2, NOTE_C6,2,
//   NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,  
//   NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,  
//   NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,8, NOTE_C5,8, NOTE_C5,8,
//   NOTE_F5,2, NOTE_C6,2,
//   NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4,  
  
//   NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F6,2, NOTE_C6,4, //8  
//   NOTE_AS5,8, NOTE_A5,8, NOTE_AS5,8, NOTE_G5,2, NOTE_C5,-8, NOTE_C5,16, 
//   NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
//   NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C5,-8, NOTE_C5,16,
//   NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
  
//   NOTE_C6,-8, NOTE_G5,16, NOTE_G5,2, REST,8, NOTE_C5,8,//13
//   NOTE_D5,-4, NOTE_D5,8, NOTE_AS5,8, NOTE_A5,8, NOTE_G5,8, NOTE_F5,8,
//   NOTE_F5,8, NOTE_G5,8, NOTE_A5,8, NOTE_G5,4, NOTE_D5,8, NOTE_E5,4,NOTE_C6,-8, NOTE_C6,16,
//   NOTE_F6,4, NOTE_DS6,8, NOTE_CS6,4, NOTE_C6,8, NOTE_AS5,4, NOTE_GS5,8, NOTE_G5,4, NOTE_F5,8,
//   NOTE_C6,1
  
// };

// // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
// // there are two values per note (pitch and duration), so for each note there are four bytes
// int notes = sizeof(melody) / sizeof(melody[0]) / 2;

// // this calculates the duration of a whole note in ms
// int wholenote = (60000 * 4) / tempo;

// int divider = 0, noteDuration = 0;

// void setup() {
//   // iterate over the notes of the melody. 
//   // Remember, the array is twice the number of notes (notes + durations)
//   for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

//     // calculates the duration of each note
//     divider = melody[thisNote + 1];
//     if (divider > 0) {
//       // regular note, just proceed
//       noteDuration = (wholenote) / divider;
//     } else if (divider < 0) {
//       // dotted notes are represented with negative durations!!
//       noteDuration = (wholenote) / abs(divider);
//       noteDuration *= 1.5; // increases the duration in half for dotted notes
//     }

//     // we only play the note for 90% of the duration, leaving 10% as a pause
//     tone(buzzer, melody[thisNote], noteDuration*0.9);

//     // Wait for the specief duration before playing the next note.
//     delay(noteDuration);
    
//     // stop the waveform generation before the next note.
//     noTone(buzzer);
//   }
// }

// void loop() {
//   // no need to repeat the melody.
// }
