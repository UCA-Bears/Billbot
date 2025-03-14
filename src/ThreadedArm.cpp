#include "vex.h"
#include "functions.h"


using namespace vex;


void threadedArm() {
    A_Motor.setVelocity(armSpeed, pct);

    if(Controller1.ButtonR1.pressing()) { //Put Arm Down
        A_Motor.spin(fwd);
    } else if (Controller1.ButtonR2.pressing()) { //Move Arm Up
        A_Motor.spin(reverse);
    } else {
        A_Motor.stop(hold);
    }
}