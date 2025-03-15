#include "autonFunctions.h"

void drive(int speed, float time) {
    if (time > 0 ) { //Drive Forward
        FL_Motor.spin(fwd, speed, pct);
        BL_Motor.spin(fwd, speed, pct);
        FR_Motor.spin(fwd, speed, pct);
        BR_Motor.spin(fwd, speed, pct);
        wait(time, msec);

    } else if ( time < 0) { //Drive Forward
        FL_Motor.spin(reverse, speed, pct);
        BL_Motor.spin(reverse, speed, pct);
        FR_Motor.spin(reverse, speed, pct);
        BR_Motor.spin(reverse, speed, pct);
        wait(time * -1, msec);
    }
    FL_Motor.stop(hold);
    BL_Motor.stop(hold);
    FR_Motor.stop(hold);
    BR_Motor.stop(hold);
}
void drive ( int speed, vex::distanceUnits distance)
{
    float time; // Time on Target postion
    float wheelRPM = WHEELSPEED * (speed/100.0f);
    float distPerSec = (WHEELCIRCUM * wheelRPM) / 60.0f;
    time = (static_cast<float>(distance)/distPerSec)*1000; // Time to Target Postion converted to msec.
    drive(speed, time);

}

void turn(int speed, float time) 
{
    if (time > 0 ) { //Turn Right
        FL_Motor.spin(fwd, speed, pct);
        BL_Motor.spin(fwd, speed, pct);
        FR_Motor.spin(reverse, speed, pct);
        BR_Motor.spin(reverse, speed, pct);
        wait(time, msec);

    } else if ( time < 0) { //Turn Left
        FL_Motor.spin(reverse, speed, pct);
        BL_Motor.spin(reverse, speed, pct);
        FR_Motor.spin(fwd, speed, pct);
        BR_Motor.spin(fwd, speed, pct);

        wait(time * -1, msec);
    }
    
    FL_Motor.stop(hold);
    BL_Motor.stop(hold);
    FR_Motor.stop(hold);
    BR_Motor.stop(hold);
}
void turn(int speed, vex::rotationUnits degr)
{
    float time; //Time to target orientation 
    
    float wheelRPM = WHEELSPEED * (speed/100.0f); //Get the current wheel speed
    float distPerSec = (WHEELCIRCUM * wheelRPM) / 60.0f; //Get how much distance is traveled per second
    
    float rotationDistance = PI * (BOTCIRCUM / 2.0f) * (static_cast<float>(degr) / 360.0f);
    
    time = (rotationDistance / distPerSec)*1000; // Converts Time to target orientation and converts it to msecs.
    

    turn(speed, time);
}