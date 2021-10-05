#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sidharth/Documents/BTP/Diag-Mat-Mul/DiagMatMul/solution1/.autopilot/db/a.g.bc ${1+"$@"}
