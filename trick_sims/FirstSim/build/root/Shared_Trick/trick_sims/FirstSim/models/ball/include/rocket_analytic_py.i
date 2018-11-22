%module me1e67967e8035ed4a8ef037c1d62200e

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket_analytic.h"
%}




#ifndef ROCKET_ANALYTIC_H
#define ROCKET_ANALYTIC_H
%import "build/root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket_py.i"
#ifdef __cplusplus
extern "C" {
#endif
int rocket_analytic(ROCKET*);
#ifdef __cplusplus
}
#endif
#endif
