#include "pitches.h"
#define pin 2


int melody[] = {
  NOTE_E5, NOTE_E5,0, NOTE_E5,0, NOTE_C5, NOTE_E5,0,NOTE_G5,0, NOTE_G4,0,

  NOTE_C5,0, NOTE_G4,0,NOTE_E4,0,NOTE_A4,0,NOTE_B4 ,0,NOTE_AS4,NOTE_A4,
  NOTE_G4,0, NOTE_E5,0,NOTE_G5,NOTE_A5,0,NOTE_F5,NOTE_G5,0,NOTE_E5,0,NOTE_C5,NOTE_D5,NOTE_B4,0,

  NOTE_C5,0, NOTE_G4,0,NOTE_E4,0,NOTE_A4,0,NOTE_B4 ,0,NOTE_AS4,NOTE_A4,
  NOTE_G4,0, NOTE_E5,0,NOTE_G5,NOTE_A5,0,NOTE_F5,NOTE_G5,0,NOTE_E5,0,NOTE_C5,NOTE_D5,NOTE_B4,0,

  0,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,0,NOTE_E5,0,NOTE_GS4,NOTE_A4,NOTE_C5,0,NOTE_A4,NOTE_C5,NOTE_D5,
  0,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,0,NOTE_E5,0,NOTE_C6,0,NOTE_C6,NOTE_C6,0,0,0,

  0,NOTE_G5,NOTE_FS5,NOTE_F5,NOTE_DS5,0,NOTE_E5,0,NOTE_GS4,NOTE_A4,NOTE_C5,0,NOTE_A4,NOTE_C5,NOTE_D5,
  0,NOTE_DS5,0,NOTE_D5,0,NOTE_C5,0,0,0,

  NOTE_C5,NOTE_C5,0,NOTE_C5,0,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_C5,0,NOTE_A4,NOTE_G4,0,
  NOTE_C5,NOTE_C5,0,NOTE_C5,0,NOTE_C5,NOTE_D5,NOTE_E5,0,0,0,0,

  NOTE_C5,NOTE_C5,0,NOTE_C5,0,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_C5,0,NOTE_A4,NOTE_G4,0,
  NOTE_E5, NOTE_E5,0, NOTE_E5,0, NOTE_C5, NOTE_E5,NOTE_G5,0,0,0,0
};



int noteDurations[] = {
  8,8,8,8,8,8,8,8,4,4,4,4,              //12

  4,8,8,4,4,8,8,8,8,8,8,4,              //12
  8,16,16,8,8,8,8,8,8,8,8,8,8,8,4,8,    //16

  4,8,8,4,4,8,8,8,8,8,8,4,              //12
  8,16,16,8,8,8,8,8,8,8,8,8,8,8,4,8,    //16

  4,8,8,8,8,8,8,8,8,8,8,8,8,8,8,        //15
  4,8,8,8,8,8,8,8,8,8,8,8,8,8,8,        //15

  4,8,8,8,8,8,8,8,8,8,8,8,8,8,8,        //15
  4,4,8,8,4,4,4,4,4,                    //9

  8,8,8,8,8,8,4,8,8,8,8,4,4,            //13
  8,8,8,8,8,8,8,8,4,4,4,4,              //12

  8,8,8,8,8,8,4,8,8,8,8,4,4,            //13
  8,8,8,8,8,8,8,8,4,4,4,4               //12
};





void setup() {
  for (int thisNote = 0; thisNote < 172; thisNote++) {


    int noteDuration = 1000 / noteDurations[thisNote];
    tone(pin, melody[thisNote], noteDuration);


    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(pin);
}
}



void loop() {

}
