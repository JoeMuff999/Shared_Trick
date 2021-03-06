

/*************************************************************************
PURPOSE: (Represent the state and initial conditions of a rocket)
**************************************************************************/
#ifndef ROCKET_H
#define ROCKET_H

typedef struct {
	
    double init_thrust;    /* *i N Force of thrust generated by rocket */
	double vel0[2];    /* *i m Init velocity of rocket */
	double pos0[2];    /* *i m Init position of rocket */	
	double init_angle; /* *i rad Angle of rocket */
	double mass; /* *i kg Mass of rocket*/
	
/*lol*/
    double airDensity; /* kg/m3 air density (rho)*/
	double drag[2];    /* N xy-drag forces */
	double gravityForce; /*  N Force of gravity on rocket*/
	double thrust[2];  /* N xy-thrust of rocket */
	double acc[2];     /* m/s2 xy-acceleration  */
	double vel[2];     /* m/s xy-velocity */
	double pos[2];     /* m xy-position */
	double angle;      /* rad Angle of Rocket which will change from 90 */

	double time;        /* s Model time */

	int impact;        /* -- Has impact occured? */
	double impactTime;  /* s Time of Impact */

} ROCKET;

#ifdef __cplusplus
extern "C" {
#endif
	int rocket_default_data(ROCKET*);
	int rocket_init(ROCKET*);
	int rocket_shutdown(ROCKET*);
#ifdef __cplusplus
}
#endif

#endif
