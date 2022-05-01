--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:57:28 09/22/2020
-- Design Name:   
-- Module Name:   C:/Users/favio/Desktop/ISE 14/bdc7segementos/ejemplo4.vhd
-- Project Name:  bdc7segementos
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: bcd7segementos
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ejemplo4 IS
END ejemplo4;
 
ARCHITECTURE behavior OF ejemplo4 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT bcd7segementos
    PORT(
         ent : OUT  std_logic;
         selec : IN  std_logic_vector(3 downto 0);
         BCD : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal selec : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal ent : std_logic;
   signal BCD : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   
 
BEGIN

process 
 ent <= '0';
with selec select 

	bcd <= "00000001" when  "0000", '1' after 200 ns,  '0' after 200 ns,

"01001111" when   "0001",  '1' after 200 ns,  '0' after 200 ns,
"00010010" when "0010", '1' after 200 ns,  '0' after 200 ns,
"00000110" when   "0011", '1' after 200 ns,  '0' after 200 ns,
"01001100" when   "0100", '1' after 200 ns,  '0' after 200 ns,
"00100100" when  "0101",'1' after 200 ns,  '0' after 200 ns, 
"01100000" when  "0110", '1' after 200 ns,  '0' after 200 ns,
"00001111" when  "0111",  '1' after 200 ns,  '0' after 200 ns,
"00000000" when "1000", '1' after 200 ns,  '0' after 200 ns,
"00001100" when  "1001",'1' after 200 ns,  '0' after 200 ns,
 "10000000" when others;

end Behavioral;
   end process;

END;
