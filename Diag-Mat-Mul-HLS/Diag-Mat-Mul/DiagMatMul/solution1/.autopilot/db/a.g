#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /ext_disk/ext_hdd/Sidharth_207/FPGA-IP-main/Diag-Mat-Mul/DiagMatMul/solution1/.autopilot/db/a.g.bc ${1+"$@"}
