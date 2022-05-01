----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:45:36 09/22/2020 
-- Design Name: 
-- Module Name:    bcd7segementos - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity bcd7segementos is
    Port (  ent : in  STD_LOGIC_VECTOR (3 downto 0);
           selec : out  STD_LOGIC_VECTOR (3 downto 0);
           BCD : out  STD_LOGIC_VECTOR (6 downto 0));
end bcd7segementos;

architecture Behavioral of bcd7segementos is


function deco( ent:  STD_LOGIC_VECTOR (3 downto 0))
return  STD_LOGIC_VECTOR is

variables de salida: out  STD_LOGIC_VECTOR (6 downto 0):
begin

		case ent is 
when "0000" =>  selec:= "0000001";  --0
when "0001" =>  selec:= "1001111";  --1
when "0010" =>  selec:= "0010010"; --2
when "0011" =>  selec:= "0000110";  --3
when "0100" =>  selec:= "1001100";  --4
when "0101" =>  selec:= "0100100";  --5
when "0110" =>  selec:= "0100000";  --6
when "0111" =>  selec:= "0001111";  --7
when "1000" =>  selec:= "0000000"; --8
when "1001" =>  selec:= "0000100"; --8
when others =>  selec:= "1111111";   --9

end case;
return selec;

end deco;
begin 


bcd<= deco (ent);
end Behavioral;

