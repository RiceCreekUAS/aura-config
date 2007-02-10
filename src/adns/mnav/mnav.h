//
// FILE: mnav.h
// DESCRIPTION: aquire, validate and decode the IMU, GPS, and Servo data
//              inbound from the MNAV
//

#ifndef _UGEAR_MNAV_H
#define _UGEAR_MNAV_H


#include "globaldefs.h"


// global definitions
extern bool autopilot_enable;
extern bool control_init;
extern char *cnt_status;


// function prototypes
void mnav_init();
void mnav_update();
void mnav_close();

void send_servo_cmd(uint16_t cnt_cmd[9]);


#endif // _UGEAR_MNAV_H