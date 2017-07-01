#include "Vtop_veri.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

vluint64_t main_time = 0;       // Current simulation time

double sc_time_stamp () {       // Called by $time in Verilog
    return main_time;
}

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    Vtop_veri* top = new Vtop_veri;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("trace.vcd");

    // Set initial values of inputs
    top->clock = 0;
    top->inp_resn = 0;

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
        if ((main_time % 8) == 1)
	{
             tfp->dump (main_time);
             //   std::cout << "nres:" << top->pin_b16 +0 ;
             //  std::cout << " run:" << top->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__run +0;
             //   std::cout << " p:" << top->top_veri__DOT__core__DOT__coggen__BRA__0__KET____DOT__cog___DOT__p +0;
             //   std::cout << " P28:" << top->pin_d14 +0 ;
             //   std::cout << std::endl;

	}

        main_time++;            // Time passes...
        if ( main_time > 1000000 )
        {
                std::cout << "Done!" << std::endl;
                break;
        }
    }
    tfp->close();
    delete top;
    exit(0);
}
