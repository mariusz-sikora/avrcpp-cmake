
#ifndef PINOUT_H
#define PINOUT_H

class PinOut{

public:
    PinOut(volatile unsigned char *port, unsigned char bit);
    void Set();
    void Clear();

private:
    volatile unsigned char *p;
    unsigned char b;
};

#endif /*PINOUT_H*/
