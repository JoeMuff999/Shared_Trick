/************************************************************************
PURPOSE: (Print the final rocket state.)
*************************************************************************/
#include <stdio.h>
#include "../include/rocket.h"
#include "trick/exec_proto.h"

int rocket_shutdown( ROCKET* C) {
    double t = exec_get_sim_time();
    printf( "========================================\n");
    printf( "      Rocket State at Shutdown     \n");
    printf( "t = %g\n", t);
    printf( "pos = [%.9f, %.9f]\n", C->pos[0], C->pos[1]);
    printf( "vel = [%.9f, %.9f]\n", C->vel[0], C->vel[1]);
	printf( "acc = [%.9f, %.9f]\n", C->acc[0], C->acc[1]);
	printf( "angle = %.9f\n", C->angle);
    printf( "========================================\n");
    return 0 ;
}