#include "vex.h"
#include "functions.h"


using namespace vex;

//Variables 
    double AxisRightDriveOut = 0;
    double AxisLeftDriveOut = 0;

void threadedDrive() {
    
    while(1) {
        //Controller Values
            double RightAxis = Controller1.Axis2.position();
            double LeftAxis = Controller1.Axis3.position();
        //Temp Direct Drive
            AxisLeftDriveOut = LeftAxis;
            AxisRightDriveOut = RightAxis;


        wait(5,msec);
    }
}