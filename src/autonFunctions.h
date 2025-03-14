#ifndef AUTON_Function
#define AUTON_Function

#include "functions.h"

// Units: Imperical Base(Inches and RPM)

// Bot specific

static const int WHEELSIZE = 3.25;

static const float BOT_LENGTH =16;

static const float WHEELSPEED = 400;

// Derived Constants

static const float PI = 3.14159;

static const float WHEELCIRCUM =    WHEELSIZE * PI;

static const float BOTCIRCUM = BOT_LENGTH * PI;


// Functions 

void drive (int speed, float t);
void drive ( int speed, vex::distanceUnits distance);

void turn(int speed, float time);
void turn(int speed, vex::rotationUnits degr);

#endif;
