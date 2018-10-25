# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.8
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.





from sys import version_info
if version_info >= (2, 6, 0):
    def swig_import_helper():
        from os.path import dirname
        import imp
        fp = None
        try:
            fp, pathname, description = imp.find_module('_m60f1d3e08103c5273af3d18ae4885fce', [dirname(__file__)])
        except ImportError:
            import _m60f1d3e08103c5273af3d18ae4885fce
            return _m60f1d3e08103c5273af3d18ae4885fce
        if fp is not None:
            try:
                _mod = imp.load_module('_m60f1d3e08103c5273af3d18ae4885fce', fp, pathname, description)
            finally:
                fp.close()
            return _mod
    _m60f1d3e08103c5273af3d18ae4885fce = swig_import_helper()
    del swig_import_helper
else:
    import _m60f1d3e08103c5273af3d18ae4885fce
del version_info
try:
    _swig_property = property
except NameError:
    pass  # Python < 2.2 doesn't have 'property'.


def _swig_setattr_nondynamic(self, class_type, name, value, static=1):
    if (name == "thisown"):
        return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'SwigPyObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name, None)
    if method:
        return method(self, value)
    if (not static):
        if _newclass:
            object.__setattr__(self, name, value)
        else:
            self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)


def _swig_setattr(self, class_type, name, value):
    return _swig_setattr_nondynamic(self, class_type, name, value, 0)


def _swig_getattr_nondynamic(self, class_type, name, static=1):
    if (name == "thisown"):
        return self.this.own()
    method = class_type.__swig_getmethods__.get(name, None)
    if method:
        return method(self)
    if (not static):
        return object.__getattr__(self, name)
    else:
        raise AttributeError(name)

def _swig_getattr(self, class_type, name):
    return _swig_getattr_nondynamic(self, class_type, name, 0)


def _swig_repr(self):
    try:
        strthis = "proxy of " + self.this.__repr__()
    except Exception:
        strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

try:
    _object = object
    _newclass = 1
except AttributeError:
    class _object:
        pass
    _newclass = 0


class SwigPyIterator(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, SwigPyIterator, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, SwigPyIterator, name)

    def __init__(self, *args, **kwargs):
        raise AttributeError("No constructor defined - class is abstract")
    __repr__ = _swig_repr
    __swig_destroy__ = _m60f1d3e08103c5273af3d18ae4885fce.delete_SwigPyIterator
    __del__ = lambda self: None

    def value(self):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_value(self)

    def incr(self, n=1):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_incr(self, n)

    def decr(self, n=1):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_decr(self, n)

    def distance(self, x):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_distance(self, x)

    def equal(self, x):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_equal(self, x)

    def copy(self):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_copy(self)

    def next(self):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_next(self)

    def __next__(self):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___next__(self)

    def previous(self):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_previous(self)

    def advance(self, n):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_advance(self, n)

    def __eq__(self, x):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___eq__(self, x)

    def __ne__(self, x):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___ne__(self, x)

    def __iadd__(self, n):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___iadd__(self, n)

    def __isub__(self, n):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___isub__(self, n)

    def __add__(self, n):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___add__(self, n)

    def __sub__(self, *args):
        return _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator___sub__(self, *args)
    def __iter__(self):
        return self
SwigPyIterator_swigregister = _m60f1d3e08103c5273af3d18ae4885fce.SwigPyIterator_swigregister
SwigPyIterator_swigregister(SwigPyIterator)


def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    all_keys = [attr for attr in dir(class_type) if not attr.startswith('__')and attr != '_s' ]
    data_keys = sorted(class_type.__swig_setmethods__.keys())
    method_keys = [ x for x in all_keys if x not in data_keys ]
    raise AttributeError("Type %s does not contain member %s.\n%s data = %s\n%s methods = %s" %
     (self.__class__.__name__,name,self.__class__.__name__,data_keys,self.__class__.__name__,method_keys))

def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
# this line is changed to handle older swigs that used PySwigObject instead of the current SwigPyObject
        if type(value).__name__ == 'SwigPyObject' or type(value).__name__ == 'PySwigObject' :
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static) or hasattr(self,name):
        self.__dict__[name] = value
    else:
        all_keys = [attr for attr in dir(class_type) if not attr.startswith('__') and attr != '_s' ]
        data_keys = sorted(class_type.__swig_setmethods__.keys())
        method_keys = [ x for x in all_keys if x not in data_keys ]
        raise AttributeError("Type %s does not contain member %s.\n%s data = %s\n%s methods = %s" %
         (self.__class__.__name__,name,self.__class__.__name__,data_keys,self.__class__.__name__,method_keys))

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,1)

import mfb2f13cf4c836a1d9e5e5e4080d10a5e

def cannon_analytic(*args):
    return _m60f1d3e08103c5273af3d18ae4885fce.cannon_analytic(*args)
cannon_analytic = _m60f1d3e08103c5273af3d18ae4885fce.cannon_analytic
# This file is compatible with both classic and new-style classes.


