#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

    #include "vex.h"
    
    using namespace vex;

    //Controller
        extern controller Controller1;
    //Motors
        extern motor FR_Motor;
        extern motor FL_Motor;
        extern motor BR_Motor;
        extern motor BL_Motor;
    //Variables
        extern double AxisLeftDriveOut;
        extern double AxisRightDriveOut;


void threadedDrive();

void threadedBrakes();

void threadedDriveMotors();

#endif