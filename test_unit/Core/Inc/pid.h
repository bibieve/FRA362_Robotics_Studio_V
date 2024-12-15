/*
 * pid.h
 *
 *  Created on: Apr 26, 2024
 *      Author: naker
 */

#ifndef INC_PID_H_
#define INC_PID_H_

#include "main.h"

//INTEGRAL TERM IS USE BACKWARD EULER RULE
typedef struct{
	float kp;
	float ki;
	float kd;
	double y_n; //Initial output
	double y_n_1;
	double e_n; //Initial error
	double e_n_1;
	double e_n_2;

} PID;

void PID_init(PID* pid, float _kp,  float _ki, float _kd);
double Update_pid(PID *pid, double error, float pid_sat, float plant_sat);
void Reset_pid(PID* pid);
#endif /* INC_PID_H_ */
