#include <avr/io.h>
#include <util/delay.h>
#include "pinout.h"

int main() {

    PinOut LED(&PORTB, 2);

    while(1) {
        LED.Set();
        _delay_ms(500);
        LED.Clear();
        _delay_ms(500);
    }
    return 0;
}
