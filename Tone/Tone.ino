#include "notes.h"

int notes[] = {
  NOTE_H3, NOTE_E4, NOTE_H3, NOTE_E4, NOTE_G4, NOTE_G4, 
  NOTE_H3, NOTE_E4, NOTE_H3, NOTE_E4, NOTE_G4, NOTE_G4, 
  NOTE_C5, NOTE_H4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_A4,
  NOTE_G4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4
};
int noteLengths[] = {
  10, 10, 10, 10, 20, 20, 
  10, 10, 10, 10, 20, 20, 
  10, 10, 10, 10, 20, 20, 
  10, 10, 10, 10, 20, 20
};
int noteCount = 24;
unsigned int tempo = 20;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < noteCount; i++){
    tone(8, notes[i], noteLengths[i] * tempo);
    delay(noteLengths[i] * tempo);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
