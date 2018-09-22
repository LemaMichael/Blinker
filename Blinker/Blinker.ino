//
// Blinker
//
// Simple Blinker for 2 LEDs
// Developed with [embedXcode](http://embedXcode.weebly.com)
//
// Author 		Michael Lema
// 				Michael Lema
//
// Date			9/21/18 11:58 PM
// Version		1
//
// Copyright	© Michael Lema, 2018
// Licence		licence
//
// See         ReadMe.txt for references
//

// Core library for code-sense - IDE-based
#include "Arduino.h"

uint8_t greenLED;
uint8_t anotherLED;

void setup() {
    greenLED = 12;
    anotherLED = 11;
    
    pinMode(greenLED, OUTPUT);
    pinMode(anotherLED, OUTPUT);
}


void loop() {
    digitalWrite(anotherLED, HIGH);
    digitalWrite(greenLED, LOW);
    
    delay(300);
    
    digitalWrite(anotherLED, LOW);
    digitalWrite(greenLED, HIGH);
    delay(300);
}

