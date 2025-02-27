#include "vex.h"
#include "functions.h"


using namespace vex;

//Variables

void threadedDriveMotors() {
    while(1) {
        BL_Motor.spin(fwd, AxisLeftDriveOut, pct);
        FL_Motor.spin(fwd, AxisLeftDriveOut, pct);

        BR_Motor.spin(fwd, AxisRightDriveOut, pct);
        FR_Motor.spin(fwd, AxisRightDriveOut, pct);

        wait(5,msec);
    }
}