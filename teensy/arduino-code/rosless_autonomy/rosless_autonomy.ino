/*
    Low-level autonomy for IMDL mapping robot
    -----------------------------------------
    Main program to demonstrate sensor integration
    and obstacle aboidance for Week 7 demonstration

    Does not include any ROS components and will
    function completely standalone.    

    Program flow:
    0) Initializations
    1) Check obstacles
    2) Update motor speeds
    3) Write sensor data to serial port
    4) Goto (1)
*/

//#include "imdl_sensors.h"

// Sesors
// (6) digital bump switches
// (1) digital ir sensor
// (2) analog sonar sensors
// (1) Serial IMU
// (2) Serial motor controllers

int progress = 0;

void setMotorSpeed(int, int);
void publishSensorData(void);

void setup(void){
    Serial.begin(19200);    // Computer
    while (!Serial);        // Wait for serial to connect

    Serial3.begin(57600);   // Razor IMU
    
    // Motor controller initialization routines

    Serial1.begin(19200);   // Begin communication to ight motor controller
    Serial2.begin(19200);   // Begin communication to Left motor controller

    delay(5);               // Motor controllers require at least 1ms before writng to 
    Serial1.write(0xAA);    // send baud-indicator byte to right motor controller
    Serial2.write(0xAA);    // send baud-indicator byte to left motor controller
    
    Serial1.write(0x83);    // Exit safe start command for right motor
    Serial2.write(0x83);    // Exit safe start command for left motor
    
    setMotorSpeed(1000, 100);
}

void loop(void){

    int GO_STRAIGHT_1 = 1000;
    int GO_RIGHT = GO_STRAIGHT_1 + 1000;
    int GO_LEFT = GO_RIGHT + 1000;
    int GO_STRAIGHT_2 = GO_LEFT + 1000;
    int GO_NOGO = GO_STRAIGHT_2 + 1000;
    int GO_TO_BEGINNING = GO_NOGO + 1000;

   
    //collisionCheck();   // Check if bumped or IR in way
    //sonarCheck();       // Check sonar and move away
    

    // Go straight
    // Turn right
    // Turn left
    // Go straight
    // Stop
    // Turn around
    // Repeat
    
    /*
    setMotorSpeed(3200, 3200);  // full-speed forward
    delay(1000);
    setMotorSpeed(-3200, -3200);  // full-speed reverse
    delay(1000);
    */

    
    if(progress == GO_STRAIGHT_1){
        setMotorSpeed(3200, 3200);
    }else if (progress == GO_RIGHT){
        setMotorSpeed(0, 3200);
    }else if(progress == GO_LEFT){
        setMotorSpeed(3200, 0);
    }else if(progress == GO_STRAIGHT_2){
        setMotorSpeed(3200, 3200);
    }else if(progress == GO_NOGO){
        setMotorSpeed(0,0);
    }else if(progress == GO_TO_BEGINNING){
        setMotorSpeed(3200, -3200);
    }else if(progress > GO_TO_BEGINNING){
        delay(2000);
        progress = 0;
    }
    
    delay(10);
    progress++;         // System counter basically

    publishSensorData();
    Serial.println(progress);
    Serial.println();
}

void publishSensorData(void){
    Serial.println("SENSORZZZ");
}
 

// Motor speed between -3200 and 3200
void setMotorSpeed(int rightSpeed, int leftSpeed){
    if (rightSpeed < 0){
        Serial1.write(0x86);        // motor reverse command
        rightSpeed = -rightSpeed;   // make speed positive
    }else{
        Serial1.write(0x85);        // motor forward command
    }
    
    if (leftSpeed > 0){
        Serial2.write(0x86);        // motor reverse command
    }else{
        leftSpeed = -leftSpeed;   // make speed positive
        Serial2.write(0x85);        // motor forward command
    }
    
    Serial1.write(rightSpeed & 0x1F);
    Serial1.write(rightSpeed >> 5);
    Serial2.write(leftSpeed & 0x1F);
    Serial2.write(leftSpeed >> 5);
}


/*

    int speed = 3200;
    while(speed > -3200){
        motorControl_setMotorSpeed(speed);
        speed--;
        Serial.print("Speed: ");
        Serial.println(speed);
    }

    while(speed < 3200){
        motorControl_setMotorSpeed(speed);
        speed++;
        delay(5);
        Serial.print("Speed: ");
        Serial.println(speed);
    }

    //motorControl_setMotorSpeed(3200);
    //delay(500);
    //motorControl_setMotorSpeed(-3200);
    //delay(500);
}
*/
