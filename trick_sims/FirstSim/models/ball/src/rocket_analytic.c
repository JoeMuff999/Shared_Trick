/*****************************************************************************
PURPOSE:    ( Analytical Rocket )
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "../include/rocket_analytic.h"

int rocket_analytic(ROCKET* C) {
    //recalculate thrust every time based on angle (which may change if im cool)
	c->thrust[0] = C->init_thrust*cos(C->angle);	
	c->thrust[1] = C->init_thrust*sin(C->angle); 
	//recalculate acceleration every time based on thrust changes
	C->acc[0] = C->thrust[0]/C->mass;  // x thrust / mass basically just Forcex / mass, this value gonna be 0 tho lol
	C->acc[1] = (C->thrust[1] - C->gravityForce)/C->mass;  //need (Fthrust - Fgravity)/mass
	//recalculate velocity 
	C->vel[0] = C->vel0[0] + C->acc[0] * C->time;
	C->vel[1] = C->vel0[1] + C->acc[1] * C->time;
	//recalc position
	C->pos[0] = C->pos0[0] + C->vel[0] * C->time + (0.5) * C->acc[0] * C->time) * C->time; // fix this these calculations are not optimal
	C->pos[1] = C->pos0[1] + C->vel[1] * C-time + (0.5) * C->acc[1] * C->time) * C->time;
	
	if (C->pos[1] < 0.0) {
		C->impactTime = (-C->vel0[1] - sqrt(C->vel0[1] * C->vel0[1] - 2 * C->pos0[1])) / C->acc[1];
		C->pos[0] = C->impactTime * C->vel0[0];
		C->pos[1] = 0.0;
		C->vel[0] = 0.0;
		C->vel[1] = 0.0;
		if (!C->impact) {
			C->impact = 1;
			fprintf(stderr, "\n\nIMPACT: t = %.9f, pos[0] = %.9f\n\n", C->impactTime, C->pos[0]);
		}
	}
	/*
	* Increment time by the time delta associated with this job
	* Note that the 0.01 matches the frequency of this job
	* as specified in the S_define.
	*/
	C->time += 0.01;
	return 0;
}