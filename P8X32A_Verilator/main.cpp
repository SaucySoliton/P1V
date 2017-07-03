#include "Vtop_veri.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

#include <bitset>
//https://katyscode.wordpress.com/2012/05/12/printing-numbers-in-binary-format-in-c/

vluint64_t main_time = 0;       // Current simulation time

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;
}

#define TRACE_ON (1)
int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vtop_veri* top = new Vtop_veri;
#ifdef TRACE_ON
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("trace.vcd");
#endif

    // Set initial values of inputs
    top->clock = 0;
    top->inp_resn = 0;
    long last_nres=-1,last_io=-1, last_ledg=-1;
    while (!Verilated::gotFinish())
    {
        if (main_time > 10)
        {
            top->inp_resn = 1;        // Deassert reset
        }

        // Toggle the clock.
        if ((main_time % 2) == 1) top->clock = 1; else top->clock = 0;

        // Run one iteration of our module
        top->eval();

        // Reduce the data save rate to save space and processing time.
#ifdef TRACE_ON
        if ((main_time % 8) == 1) 
	{
             tfp->dump (main_time);
	}
#endif

	// pin change detection
        if( (last_nres!=top->top_veri__DOT__nres) ||
            (last_io!=top->io)                    ||
	    (last_ledg!=top->ledg)                   )
	{
               last_nres=top->top_veri__DOT__nres;
	       last_io=top->io;
	       last_ledg=top->ledg;
               std::cout << "resn:" << top->top_veri__DOT__nres+0;
               std::cout << " ledg:" << std::bitset<8>(top->ledg) ;
               std::cout << " IO:" << std::bitset<32>(top->io) ;
               std::cout << " PC0:" << top->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p+0;
               std::cout << " time:" << main_time ;
               std::cout << std::endl;
	       // look in obj_dir/Vtop_veri.h for signal names
	}

        main_time++;            // Time passes...
        if ( main_time > 1000000 )
        {
                std::cout << "Done!" << std::endl;
                break;
        }
    }
#ifdef TRACE_ON
    tfp->close();
#endif
    delete top;
    exit(0);
}
