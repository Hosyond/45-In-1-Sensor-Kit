#include <IRremote.h>
int IR_PIN = 3;
IRsend irsend(IR_PIN);
    void setup()
    {}
    void loop() {
    irsend.sendRC5(0x0, 8); //send 0x0 code (8 bits)
        delay(200);
    irsend.sendRC5(0x1, 8); 
        delay(200); }