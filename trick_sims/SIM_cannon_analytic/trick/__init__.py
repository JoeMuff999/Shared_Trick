from pkgutil import extend_path
__path__ = extend_path(__path__, __name__)
import sys
import os
sys.path.append(os.getcwd() + "/trick")

import _sim_services
from sim_services import *

# create "all_cvars" to hold all global/static vars
all_cvars = new_cvar_list()
combine_cvars(all_cvars, cvar)
cvar = None

# /root/trick_sims/SIM_cannon_analytic/S_source.hh
import _m1cf7ce654cc28b05c7a7cb6ba06cb254
from m1cf7ce654cc28b05c7a7cb6ba06cb254 import *
combine_cvars(all_cvars, cvar)
cvar = None

# /root/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon.h
import _mfb2f13cf4c836a1d9e5e5e4080d10a5e
from mfb2f13cf4c836a1d9e5e5e4080d10a5e import *
combine_cvars(all_cvars, cvar)
cvar = None

# /root/trick_sims/SIM_cannon_analytic/models/cannon/include/cannon_analytic.h
import _m60f1d3e08103c5273af3d18ae4885fce
from m60f1d3e08103c5273af3d18ae4885fce import *
combine_cvars(all_cvars, cvar)
cvar = None

# S_source.hh
import _m1cf7ce654cc28b05c7a7cb6ba06cb254
from m1cf7ce654cc28b05c7a7cb6ba06cb254 import *

import _top
import top

import _swig_double
import swig_double

import _swig_int
import swig_int

import _swig_ref
import swig_ref

from shortcuts import *

from exception import *

cvar = all_cvars

