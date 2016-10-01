
#include <avr/io.h>
#include "pinout.h"

PinOut::PinOut(volatile unsigned char *port, unsigned char bit) {
    p = port;
    b = bit;
    *(p-1) |= (1 << b);
}

void PinOut::Set() {
    *p |= (1<<b);
}

void PinOut::Clear() {
    *p &= ~(1<<b);
}
