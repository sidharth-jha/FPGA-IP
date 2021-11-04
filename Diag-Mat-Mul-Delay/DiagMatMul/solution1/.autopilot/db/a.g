#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sidharth/Documents/BTP/FPGA-IP/Diag-Mat-Mul-Delay/DiagMatMul/solution1/.autopilot/db/a.g.bc ${1+"$@"}
