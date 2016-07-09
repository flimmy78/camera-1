#ifndef __CTRL_H
#define __CTRL_H

#define PITCH_CH 0
#define ROLL_CH  1
#define YAW_CH   2
#define THR_CH   3

typedef struct
{
	double p;
	double i;
	double d;
}pid_group;

#endif 