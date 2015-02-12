
#include <Arduino.h>
#include "pitches.h"
#include "play_tone.h"

#define N_NOTES         71



struct song imperial_march[] = {
                                {NOTE_A4,  500},
                                {NOTE_A4,  500},
                                {NOTE_A4,  500},
                                {NOTE_F4,  350},
                                {NOTE_C5,  150},
                                {NOTE_A4,  500},
                                {NOTE_F4,  350},
                                {NOTE_C5,  150},
                                {NOTE_A4, 1000}, // 9 notas

                                {NOTE_E5,  500}, // 10 notas
                                {NOTE_E5,  500},
                                {NOTE_E5,  500},
                                {NOTE_F5,  350},
                                {NOTE_C5,  150},
                                {NOTE_GS4, 500},
                                {NOTE_F4,  350},
                                {NOTE_C5,  150},
                                {NOTE_A4, 1000},  // 18 notas

                                {NOTE_A5,  500},
                                {NOTE_A4,  350}, // 20 notas
                                {NOTE_A4,  150},
                                {NOTE_A5,  500},
                                {NOTE_GS5, 250},
                                {NOTE_GS5, 250},
                                {NOTE_G5,  250},
                                {NOTE_FS5, 100},
                                {NOTE_F5,  100},
                                {NOTE_FS5, 250},
                                {       0, 250}, // 29 notas

                                {NOTE_AS4, 250}, // 30 notas
                                {NOTE_DS5, 500},
                                {NOTE_D5,  250},
                                {NOTE_CS5, 250},
                                {NOTE_C5,  125},
                                {NOTE_G4,  125},
                                {NOTE_C5,  250},
                                {       0, 250},

                                {NOTE_F4,  125},
                                {NOTE_GS4, 500},
                                {NOTE_F4,  375},  // 40 notas
                                {NOTE_A4,  125},
                                {NOTE_C5,  500},
                                {NOTE_A4,  375},
                                {NOTE_C5,  125},
                                {NOTE_E5, 1000},  // 45 notas

                                //more interesting stuff (this doesn't quite get it right somehow)
                                {NOTE_A5,  500},
                                {NOTE_A4,  350},
                                {NOTE_A4,  150},
                                {NOTE_A5,  500},
                                {NOTE_GS5, 250},  // 50 notas
                                {NOTE_G5,  250},
                                {NOTE_FS5, 125},
                                {NOTE_F5,  125},
                                {NOTE_FS5, 250},
                                {       0, 250},

                                {NOTE_AS4, 250},
                                {NOTE_DS5, 500},
                                {NOTE_DS5, 250},
                                {NOTE_CS5, 250},  // 59 notas
                                {NOTE_C5,  125},  // 60 notas
                                {NOTE_G4,  125},
                                {NOTE_C5,  250},
                                {       0, 250},

                                {NOTE_F4,  250},
                                {NOTE_GS4, 500},
                                {NOTE_F4,  375},
                                {NOTE_C5,  125},
                                {NOTE_A4,  500},
                                {NOTE_F4,  375},
                                {NOTE_C4,  150},  // 70 notas
                                {NOTE_A4, 1000}   // 71 notas
                               };

/*
struct song {

        int     _tone;
        short   _duration;

};

*/

void setup() {

        pinMode( A0, OUTPUT );
        pinMode( A1, OUTPUT );
        pinMode( A2, OUTPUT );
        pinMode( A3, OUTPUT );
        pinMode( A4, OUTPUT );
        pinMode( A5, OUTPUT );

        pinMode( 13, OUTPUT );
        playTone( 9, imperial_march, N_NOTES );

}


void loop() {

        digitalWrite(13, HIGH );
        delay(250);
        digitalWrite( 13, LOW );
        delay(250);


}
