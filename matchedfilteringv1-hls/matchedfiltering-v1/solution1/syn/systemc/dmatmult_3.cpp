#include "dmatmult.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void dmatmult::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"rxmat_stream_TDATA\" :  \"" << rxmat_stream_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"rxmat_stream_TVALID\" :  \"" << rxmat_stream_TVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"rxmat_stream_TREADY\" :  \"" << rxmat_stream_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"rxmat_stream_TKEEP\" :  \"" << rxmat_stream_TKEEP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"rxmat_stream_TSTRB\" :  \"" << rxmat_stream_TSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"rxmat_stream_TLAST\" :  \"" << rxmat_stream_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"xmat_stream_TDATA\" :  \"" << xmat_stream_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"xmat_stream_TVALID\" :  \"" << xmat_stream_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"xmat_stream_TREADY\" :  \"" << xmat_stream_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"xmat_stream_TKEEP\" :  \"" << xmat_stream_TKEEP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"xmat_stream_TSTRB\" :  \"" << xmat_stream_TSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"xmat_stream_TLAST\" :  \"" << xmat_stream_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TDATA\" :  \"" << out_stream_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TVALID\" :  \"" << out_stream_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out_stream_TREADY\" :  \"" << out_stream_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TKEEP\" :  \"" << out_stream_TKEEP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TSTRB\" :  \"" << out_stream_TSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out_stream_TLAST\" :  \"" << out_stream_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWVALID\" :  \"" << s_axi_control_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_AWREADY\" :  \"" << s_axi_control_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWADDR\" :  \"" << s_axi_control_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WVALID\" :  \"" << s_axi_control_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_WREADY\" :  \"" << s_axi_control_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WDATA\" :  \"" << s_axi_control_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WSTRB\" :  \"" << s_axi_control_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARVALID\" :  \"" << s_axi_control_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_ARREADY\" :  \"" << s_axi_control_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARADDR\" :  \"" << s_axi_control_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RVALID\" :  \"" << s_axi_control_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_RREADY\" :  \"" << s_axi_control_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RDATA\" :  \"" << s_axi_control_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RRESP\" :  \"" << s_axi_control_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BVALID\" :  \"" << s_axi_control_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_BREADY\" :  \"" << s_axi_control_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BRESP\" :  \"" << s_axi_control_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

