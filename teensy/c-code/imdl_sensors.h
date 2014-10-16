#ifndef HEADER_FILE
#define HEADER_FILE

#include "Arduino.h"
class EncoderMotor{
    public:
        EncoderMotor(int portNum, int baudRate, int pinEncA, int pinEncB);
        void exitSafeStart(void);
        void setMotorSpeed(int speed);
        void clearCounter(void);
        int getCounter(void);
    private:
        int _counter;
        int _pinEncA;
        int _pinEncB;
}

#endif
