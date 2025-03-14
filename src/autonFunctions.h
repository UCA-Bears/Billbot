#ifndef AUTON_Function
#define AUTON_Function

#include "functions.h"

// Unites: Imperical

// Bot specific

static const int WHEELSIZE = 0;

static const float BOT_LENGTH =0;

static const float WHEELSPEED = 0;

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
