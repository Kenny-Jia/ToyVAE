#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /u1/hjia625/conifer/Vivado_Resource_small_SNL_VAE/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
