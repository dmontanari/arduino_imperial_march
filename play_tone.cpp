/*
 *	play_tone.cpp
 *
 * - Play tone based on pitches.h
 * - Define the interval (delay) between tone and noTone from the note itself
 *
 * Daniel Montanari (dmontanari@gmail.com)
 *
 *
 */

#include <Arduino.h>
#include "pitches.h"
#include "play_tone.h"

int _pins[6] = { A0,A1,A2,A3,A4,A5 };

void playTone( int _pin, struct song *s, int n_size ) {


	int i = 0;

	for ( i = 0; i < n_size; i++ ) {

                if ( s[i]._tone != 0 ) {

                        tone( _pin, s[i]._tone );
                        digitalWrite( _pins[i%6], HIGH );
                }

                delay( s[i]._duration );

                if ( s[i]._tone != 0 ) {

                        noTone( _pin );
                        digitalWrite( _pins[i%6], LOW );

                }

                delay(20);

	}

}


