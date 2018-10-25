#include <Python.h>
#if PY_VERSION_HEX >= 0x03000000
extern "C" {

PyObject * PyInit__m1cf7ce654cc28b05c7a7cb6ba06cb254(void) ; /* /root/trick_sims/SIM_cannon_analytic/S_source.hh */
PyObject * PyInit__mfb2f13cf4c836a1d9e5e5e4080d10a5e(void) ; /* /root/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h */
PyObject * PyInit__m60f1d3e08103c5273af3d18ae4885fce(void) ; /* /root/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h */
PyObject * PyInit__sim_services(void) ;
PyObject * PyInit__top(void) ;
PyObject * PyInit__swig_double(void) ;
PyObject * PyInit__swig_int(void) ;
PyObject * PyInit__swig_ref(void) ;

void init_swig_modules(void) {

    PyImport_AppendInittab("_mfb2f13cf4c836a1d9e5e5e4080d10a5e", PyInit__mfb2f13cf4c836a1d9e5e5e4080d10a5e) ;
    PyImport_AppendInittab("_m60f1d3e08103c5273af3d18ae4885fce", PyInit__m60f1d3e08103c5273af3d18ae4885fce) ;
    PyImport_AppendInittab("_m1cf7ce654cc28b05c7a7cb6ba06cb254", PyInit__m1cf7ce654cc28b05c7a7cb6ba06cb254) ;
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

void init_m1cf7ce654cc28b05c7a7cb6ba06cb254(void) ; /* /root/trick_sims/SIM_cannon_analytic/S_source.hh */
void init_mfb2f13cf4c836a1d9e5e5e4080d10a5e(void) ; /* /root/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h */
void init_m60f1d3e08103c5273af3d18ae4885fce(void) ; /* /root/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h */
void init_sim_services(void) ;
void init_top(void) ;
void init_swig_double(void) ;
void init_swig_int(void) ;
void init_swig_ref(void) ;

void init_swig_modules(void) {

    init_mfb2f13cf4c836a1d9e5e5e4080d10a5e() ;
    init_m60f1d3e08103c5273af3d18ae4885fce() ;
    init_m1cf7ce654cc28b05c7a7cb6ba06cb254() ;
    init_sim_services() ;
    init_top() ;
    init_swig_double() ;
    init_swig_int() ;
    init_swig_ref() ;
    return ;
}

}
#endif
