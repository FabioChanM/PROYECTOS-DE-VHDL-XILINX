--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: bcd7segementos_synthesis.vhd
-- /___/   /\     Timestamp: Wed Sep 23 00:03:03 2020
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm bcd7segementos -w -dir netgen/synthesis -ofmt vhdl -sim bcd7segementos.ngc bcd7segementos_synthesis.vhd 
-- Device	: xc3s50-5-pq208
-- Input file	: bcd7segementos.ngc
-- Output file	: C:\Users\favio\Desktop\ISE 14\bdc7segementos\netgen\synthesis\bcd7segementos_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: bcd7segementos
-- Xilinx	: C:\Xilinx\14.7\ISE_DS\ISE\
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity bcd7segementos is
  port (
    ent : out STD_LOGIC; 
    BCD : out STD_LOGIC_VECTOR ( 7 downto 0 ); 
    selec : in STD_LOGIC_VECTOR ( 3 downto 0 ) 
  );
end bcd7segementos;

architecture Structure of bcd7segementos is
  signal BCD_0_OBUF_8 : STD_LOGIC; 
  signal BCD_1_OBUF_9 : STD_LOGIC; 
begin
  XST_GND : GND
    port map (
      G => BCD_1_OBUF_9
    );
  XST_VCC : VCC
    port map (
      P => BCD_0_OBUF_8
    );
  ent_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => ent
    );
  BCD_7_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(7)
    );
  BCD_6_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(6)
    );
  BCD_5_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(5)
    );
  BCD_4_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(4)
    );
  BCD_3_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(3)
    );
  BCD_2_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(2)
    );
  BCD_1_OBUF : OBUF
    port map (
      I => BCD_1_OBUF_9,
      O => BCD(1)
    );
  BCD_0_OBUF : OBUF
    port map (
      I => BCD_0_OBUF_8,
      O => BCD(0)
    );

end Structure;

