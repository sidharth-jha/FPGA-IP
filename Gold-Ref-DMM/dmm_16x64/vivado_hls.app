<project xmlns="com.autoesl.autopilot.project" top="dmatmult" name="dmm_64x4096">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim"/>
    </Simulation>
    <files xmlns="">
        <file name="../tb_matmult.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="dmm_64x4096/matmult_top.cpp" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
        <file name="dmm_64x4096/matmult.h" sc="0" tb="false" cflags="" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

