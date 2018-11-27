/*****************************************************************************
PURPOSE:    ( Analytical Rocket )
*****************************************************************************/
#include <stdio.h>
#include <math.h>
#include "../include/rocket_analytic.h"

int rocket_analytic(ROCKET* C) {
	
	
	//Air Density changes based on altitude
	if(C->pos[1] > 1000)
	{
		C->airDensity = 1.112;
		if(C->pos[1] > 5000)
		{
			C->airDensity = .7364;
			if(C->pos[1] > 10000)
			{
				C->airDensity = .4135;
				if(C->pos[1] > 15000)
				{
					C->airDensity = .1948;
					if(C->pos[1] > 20000)
					{
						C->airDensity = .08891;
						if(C->pos[1] > 25000)
						{
							C->airDensity = .04008;
							if(C->pos[1] > 30000)
							{
								C->airDensity = .01841;
								if(C->pos[1] > 40000)
								{
									C->airDensity = .003996;
								}
							}
						}
					}
				}
			}
		}
	}
	
	
	
	
	//recalculate drag each time based on angle
	C->drag[0] = .82 * (3.66 * sin(C->angle) * 	68.428) *.5*C->airDensity*C->vel[0]*C->vel[0];
	C->drag[1] = .42 *(3.66 * cos(C->angle)*68.428)*.5 *C->airDensity*C->vel[1]*C->vel[1];
    //recalculate thrust every time based on angle (which may change if im cool)
	C->thrust[0] = C->init_thrust*cos(C->angle);	
	C->thrust[1] = C->init_thrust*sin(C->angle); 
	//recalculate acceleration every time based on thrust changes
	C->acc[0] = (C->thrust[0]-C->drag[0])/C->mass;  // x thrust / mass basically just Forcex / mass, this value gonna be 0 tho lol
	C->acc[1] = (C->thrust[1] + C->gravityForce-C->drag[1])/C->mass;  //need (Fthrust - Fgravity)/mass
	
if(C->acc[0] < 0 || C->acc[1] < 0)
{
			fprintf(stderr, "\n\nIMPACT: t = %.9f, dragx = %.9f, dragy = %.9f, mass = %.9f, vel = %.9f, thrustx = %.9f, angle = %.9f", C->time, C->drag[0],  C->drag[1], C->mass, C->vel[0], C->thrust[0],C->angle);

}
	//recalculate velocity these are not used for calculations, but rather for graphing purposes
	C->vel[0] = C->vel[0] + C->acc[0] * .01;
	C->vel[1] = C->vel[1] + C->acc[1] * .01;
	//recalc position
	C->pos[0] = C->pos[0] + (C->vel[0] * .01) + ((0.5) * C->acc[0] * .01) * .01; // add itself to itself every .01 seconds with new acceleration
	C->pos[1] = C->pos[1] + (C->vel[1] * .01) + ((0.5) * C->acc[1] * .01) * .01;
	/*change mass at a rate of -2463.3kg/s because of burn rate
	 the "162" comparison is the burn time of stage 1, therefore we will stop accounting for fuel burn at the end of stage 1 and launch will be over    */
	if(C->time < 162)
	{
	C->mass = C->mass - 24.633;	//acceleration will increase massively
	
	//Angle change is .2469deg/seconds, converted to radians = 0.00430921792 divide by 100 to get it to every hundredth of second
	
	C->angle = C->angle - (M_PI * 0.0000137166666565635117531938178304); // putting this here because burn stops at 162 seconds
	}
	
	
	
	//for impact assume that its just going to be altitude calculations
	
	if (C->pos[1] > 25000) { //if y  is greater than like lets say 40,000 meters?
		//C->impactTime = (-C->vel0[1] - sqrt(C->vel0[1] * C->vel0[1] - 2 * C->pos0[1])) / C->acc[1]; // okay this shit is completely wrong lol
		//C->pos[0] = C->impactTime * C->vel0[0];
		//commenting these out because I don't need to set these values to 0 ie its not a cannonball.
		
		/*
		C->pos[1] = 0.0;
		C->vel[0] = 0.0;
		C->vel[1] = 0.0;*/
		if (!C->impact) {
			C->impact = 1;
			fprintf(stderr, "\n\nIMPACT: t = %.9f, pos[1] = %.9f, acc = %.9f, mass = %.9f, vel = %.9f", C->time, C->pos[1],  C->acc[1], C->mass, C->vel[1]);
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