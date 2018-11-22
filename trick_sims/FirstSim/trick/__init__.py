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

# /root/Shared_Trick/trick_sims/FirstSim/S_source.hh
import _m02f6b5bb52bf319dfe0fa8bf2cbbf84b
from m02f6b5bb52bf319dfe0fa8bf2cbbf84b import *
combine_cvars(all_cvars, cvar)
cvar = None

# /root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket.h
import _meade57f199c86184507d5c153bb0ff30
from meade57f199c86184507d5c153bb0ff30 import *
combine_cvars(all_cvars, cvar)
cvar = None

# /root/Shared_Trick/trick_sims/FirstSim/models/ball/include/rocket_analytic.h
import _me1e67967e8035ed4a8ef037c1d62200e
from me1e67967e8035ed4a8ef037c1d62200e import *
combine_cvars(all_cvars, cvar)
cvar = None

# S_source.hh
import _m02f6b5bb52bf319dfe0fa8bf2cbbf84b
from m02f6b5bb52bf319dfe0fa8bf2cbbf84b import *

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

