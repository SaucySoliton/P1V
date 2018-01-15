// features

/*
-------------------------------------------------------------------------------
Copyright 2014 Parallax Inc.

This file is part of the hardware description for the Propeller 1 Design.

The Propeller 1 Design is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your option)
any later version.

The Propeller 1 Design is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
more details.

You should have received a copy of the GNU General Public License along with
the Propeller 1 Design.  If not, see <http://www.gnu.org/licenses/>.
-------------------------------------------------------------------------------
*/


//-----------------------------------------------------------------------------
// Invert Cog LED outputs
//
// Define this macro in your project to invert the cog LEDs, for hardware that
// turns the LEDs on when the outputs are low instead of high.
`ifdef INVERT_COG_LEDS
defparam core.INVERT_COG_LEDS = `INVERT_COG_LEDS;
`endif

parameter NUM_COGS=2;

// RAM Options
//
// KL = kilo-longs, 1 long is 4 bytes
parameter HUB_RAM_KL=2;  // 8=32kB, 4=16kB, 2=8kB
parameter HUB_RAM_INIT0="../P8X32A_Verilator/hub_ram_byte0.hex";
parameter HUB_RAM_INIT1="../P8X32A_Verilator/hub_ram_byte1.hex";
parameter HUB_RAM_INIT2="../P8X32A_Verilator/hub_ram_byte2.hex";
parameter HUB_RAM_INIT3="../P8X32A_Verilator/hub_ram_byte3.hex";
// TODO have main.cpp load these


// ROM Options
//
//parameter HUB_ROM_KL=8;  // 8=32kB, 4=16kB, 1=1kB
//parameter HUB_ROM_INIT="../HDL/rom_8000_ffff_scrambled.hex";

//parameter HUB_ROM_KL=4;  // 8=32kB, 4=16kB, 1=1kB
//parameter HUB_ROM_INIT="../HDL/rom_c000_ffff_scrambled.hex";

parameter HUB_ROM_KL=1;  // 8=32kB, 4=16kB, 1=1kB
parameter HUB_ROM_INIT="../HDL/rom_f000_ffff_scrambled.hex";



parameter COG_RAM_INIT="../Spin/rambooter.hex";

