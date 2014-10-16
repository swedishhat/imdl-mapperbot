/*
    Collection of subroutines for interfacing with IMDL mapperbot sensors
*/

#include "Arduino.h"
#include "imdl_sensors.h"

/*
    Pololu Simple Motor Controller
    =================================
*/

EncoderMotor::EncoderMotor(int portNum, int baudRate, int pinEncA, int pinEncB){
    switch(portNum){
        case 1:
            Serial1.begin(baudRate);
            break;
        case 2:
            Serial2.begin(baudRate);
            break;
        case 3:
            Serial3.begin(baudRate);
            break;
        default:
            break;
    }
    pinMode(pinEncA, INPUT);
    pinMode(pinEncB, INPUT);
    _pinEncA = pinEncA;
    _pinENCB = pinEncB;
}

EncoderMotor::exitSafeStart(void){
// Required to allow motors to move.
// Must be called when controller restarts and after any error
    Serial1.write(0x83);
}

void motorControl_init(void){
    Serial1.begin(19200);           // Start serial channel at 19.2k baud
    delay(5);                       // Motor controller requires at least 1ms before writng to 
    Serial1.write(0xAA);            // send baud-indicator byte
    motorControl_exitSafeStart();   // Clears SafeStart violation so motor can be written to
}

void motorControl_setMotorSpeed(int speed){
// Speed should be a number from -3200 to 3200
    if (speed < 0){
        Serial1.write(0x86);    // motor reverse command
        speed = -speed;         // Make speed positive
    }else{
        Serial1.write(0x85);    // motor forward command
    }
    
    Serial1.write(speed & 0x1F);
    Serial1.write(speed >> 5);
}
