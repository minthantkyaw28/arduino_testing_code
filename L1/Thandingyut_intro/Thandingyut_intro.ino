#include "tone.h"
boolean song = true;

void setup() {
  StartBuzz();
  
}
void loop() {
  if (song == true) 
      {
        for (int i=0; i<=3; i++) {
        intro();
        pause();        
        }
        song = false;
      }
}
void intro() {
  tone(s, NOTE_A5);
  Shorter();
  tone(s, NOTE_A5);
  Shorter();
  tone(s, NOTE_FS5);
  Shorter();
  tone(s, NOTE_B5);
  Shorter();
  tone(s, NOTE_A5);
  Shorter();
  tone(s, NOTE_D5);
  Shorter();
  tone(s, NOTE_D5);
  Shorter();
  tone(s, NOTE_D5);
  Shorter();
  tone(s, NOTE_FS5);
  Short();
  tone(s, NOTE_FS5);
  Short();
  tone(s, NOTE_E5);
  Short();
  tone(s, NOTE_D5);
  Short();
  tone(s, NOTE_E5);
  Short();
  pause();
  tone(s, NOTE_A5);
  Shorter();
  tone(s, NOTE_A5);
  Shorter();
  tone(s, NOTE_FS5);
  Shorter();
  tone(s, NOTE_B5);
  Shorter();
  tone(s, NOTE_A5);
  Shorter();
  tone(s, NOTE_D5);
  Shorter();
  tone(s, NOTE_D5);
  Shorter();
  tone(s, NOTE_D5);
  Shorter();
  tone(s, NOTE_FS5);
  Short();
  tone(s, NOTE_FS5);
  Short();
  tone(s, NOTE_E5);
  Short();
  tone(s, NOTE_E5);
  Short();
  tone(s, NOTE_D5);
  Short();

}
