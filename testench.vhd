--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:43:01 09/24/2020
-- Design Name:   
-- Module Name:   C:/Users/favio/Desktop/ISE 14/bdc7segementos/testench.vhd
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
 
ENTITY testench IS
END testench;
 
ARCHITECTURE behavior OF testench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT bcd7segementos
    PORT(
         ent : IN  std_logic_vector(3 downto 0);
         selec : OUT  std_logic_vector(3 downto 0);
         BCD : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal ent : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal selec : std_logic_vector(3 downto 0);
   signal BCD : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: bcd7segementos PORT MAP (
          ent => ent,
          selec => selec,
          BCD => BCD
        );
 ent<= "0001" after 200 ns, "0010" after 200 ns, "0011" after 200 ns, "0100" after 200 ns;
   
   end process;

END;
