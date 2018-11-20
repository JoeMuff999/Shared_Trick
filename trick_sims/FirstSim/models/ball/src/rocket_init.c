/******************************* TRICK HEADER ****************************
PURPOSE: (Set the initial data values)
*************************************************************************/

/* Model Include files */
#include <math.h>
#include "../include/rocket.h"

/* default data job */
int rocket_default_data(ROCKET* C) {
    C->init_thrust = 16400000.0 //16,400,000 N
	C->acc[0] = 0.0;
	C->acc[1] = -9.81;
	C->init_angle = M_PI/2;
	C->mass = 1420788 // 1,420,788 Kg
	
	C->pos0[0] = 0.0;
	C->pos0[1] = 0.0;
		
	//c->drag[0] = 0.0;
	//c->drag[1] = 0.0;

	C->time = 0.0;

	C->impact = 0;
	C->impactTime = 0.0;

	return 0;
}

/* initialization job */
int rocket_init(ROCKET* C) {

    C->angle = C->init_angle;

	C->gravityForce = C->mass * -9.81; // force is going to be negative, so add it don't subtract
	
	C->vel0[0] = 0.0;
	C->vel0[1] = 0.0;

	C->vel[0] = C->vel0[0];
	C->vel[1] = C->vel0[1];
	
	c->thrust[0] = C->init_thrust*cos(C->init_angle);	
	c->thrust[1] = C->init_thrust*sin(C->init_angle); 

	C->impactTime = 0.0;
	C->impact = 0.0;

	return 0;
}
