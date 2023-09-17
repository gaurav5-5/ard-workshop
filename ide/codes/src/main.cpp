// Required for Arduino
#include "Arduino.h"

// Declaring variables
byte P,Q,R,S,F;

void setup()
{
    // Output Pins
    pinMode(2, OUTPUT);

    // Input Pins
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    pinMode(8, INPUT);
    pinMode(9, INPUT);
}

void loop()
{
    // Reading P,Q,R,S
    P = digitalRead(6);
    Q = digitalRead(7);
    R = digitalRead(8);
    S = digitalRead(9);

    // F(P,Q,R,S) = Q'.S' + Q.S
    F = (Q && S) || (!Q && !S);

    // Setting Pin 2 to F
    digitalWrite(2, F);
}
