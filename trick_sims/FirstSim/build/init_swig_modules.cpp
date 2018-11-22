#include <Python.h>
#if PY_VERSION_HEX >= 0x03000000
extern "C" {

PyObject * PyInit__m02f6b5bb52bf319dfe0fa8bf2cbbf84b(void) ; /* /root/Shared_Trick/trick_sims/FirstSim/S_source.hh */
PyObject * PyInit__meade57f199c86184507d5c153bb0ff30(void) ; /* /root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket.h */
PyObject * PyInit__me1e67967e8035ed4a8ef037c1d62200e(void) ; /* /root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket_analytic.h */
PyObject * PyInit__sim_services(void) ;
PyObject * PyInit__top(void) ;
PyObject * PyInit__swig_double(void) ;
PyObject * PyInit__swig_int(void) ;
PyObject * PyInit__swig_ref(void) ;

void init_swig_modules(void) {

    PyImport_AppendInittab("_meade57f199c86184507d5c153bb0ff30", PyInit__meade57f199c86184507d5c153bb0ff30) ;
    PyImport_AppendInittab("_me1e67967e8035ed4a8ef037c1d62200e", PyInit__me1e67967e8035ed4a8ef037c1d62200e) ;
    PyImport_AppendInittab("_m02f6b5bb52bf319dfe0fa8bf2cbbf84b", PyInit__m02f6b5bb52bf319dfe0fa8bf2cbbf84b) ;
    PyImport_AppendInittab("_sim_services", PyInit__sim_services) ;
    PyImport_AppendInittab("_top", PyInit__top) ;
    PyImport_AppendInittab("_swig_double", PyInit__swig_double) ;
    PyImport_AppendInittab("_swig_int", PyInit__swig_int) ;
    PyImport_AppendInittab("_swig_ref", PyInit__swig_ref) ;
    return ;
}

}
#else
extern "C" {

void init_m02f6b5bb52bf319dfe0fa8bf2cbbf84b(void) ; /* /root/Shared_Trick/trick_sims/FirstSim/S_source.hh */
void init_meade57f199c86184507d5c153bb0ff30(void) ; /* /root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket.h */
void init_me1e67967e8035ed4a8ef037c1d62200e(void) ; /* /root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket_analytic.h */
void init_sim_services(void) ;
void init_top(void) ;
void init_swig_double(void) ;
void init_swig_int(void) ;
void init_swig_ref(void) ;

void init_swig_modules(void) {

    init_meade57f199c86184507d5c153bb0ff30() ;
    init_me1e67967e8035ed4a8ef037c1d62200e() ;
    init_m02f6b5bb52bf319dfe0fa8bf2cbbf84b() ;
    init_sim_services() ;
    init_top() ;
    init_swig_double() ;
    init_swig_int() ;
    init_swig_ref() ;
    return ;
}

}
#endif
