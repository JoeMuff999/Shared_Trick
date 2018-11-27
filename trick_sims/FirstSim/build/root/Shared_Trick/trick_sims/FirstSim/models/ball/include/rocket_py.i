%module meade57f199c86184507d5c153bb0ff30

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket.h"
%}

%trick_swig_class_typemap(ROCKET, ROCKET)





#ifndef ROCKET_H
#define ROCKET_H

typedef struct {
	
    double init_thrust;    

	double vel0[2];    

	double pos0[2];    
	
	double init_angle; 

	double mass; 

	


    double airDensity; 

	double drag[2];    

	double gravityForce; 

	double thrust[2];  

	double acc[2];     

	double vel[2];     

	double pos[2];     

	double angle;      


	double time;        


	int impact;        

	double impactTime;  


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

#ifdef TRICK_SWIG_DEFINED_ROCKET
%trick_cast_as(ROCKET, ROCKET)
#endif
