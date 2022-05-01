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
           BCD : out  STD_LOGIC_VECTOR (7 downto 0)
			  Q1 : out  STD_LOGIC;
	        Q2 : out  STD_LOGIC;
			  Q3 : out  STD_LOGIC;
           clock : in  STD_LOGIC;
           j : in  STD_LOGIC;
           k : in  STD_LOGIC;
			  j2 : in  STD_LOGIC;
           k2 : in  STD_LOGIC;
			  j3 : in  STD_LOGIC;
           k3 : in  STD_LOGIC));
end bcd7segementos;

architecture Behavioral of bcd7segementos is
signal q11: std_logic;
signal q22: std_logic;
signal q33: std_logic;
begin
bcd7: process

begin
  selec<= "1110";
bcd <= "00000011" when ent= "0000" else  
 
"10011111" when ent=  "0001" else  
"00100101" when  ent=  "0010" else   
"00001101" when   ent=  "0011" else 
"10011001" when   ent=  "0100" else  
"01001001" when  ent=  "0101" else 
"11000001" when  ent=  "0110" else 
"00011111" when  ent=  "0111"  else 
"00000001" when  ent= "1000" else 
"00011001" when  ent=  "1001" else 
"11111111";


end process;


jk1 : process (clock, j, k, q11)
if clock = '0' then 
	if (j= '0' and k = '0') then q11 <= q11;
	elsif (j= '0' and k = '1') then q11 <= '0';
	elsif (j= '1' and k = '0') then q11 <= '1';
	elsif (j= '1' and k = '1') then q11 <= not q11;
	end if;
	end if;
	
	q1 <= q11;
end process;
	

jk2 : process (clock, j2, k2, q22 , q33)
begin 
	if clock = '0' then 
	if (j2= '0' and k2 = '0') then q22 <= q22;
	elsif (j2= '0' and k2 = '1') then q22 <= '0';
	elsif (j2= '1' and k2 = '0') then q22 <= '1';
	elsif (j2= '1' and k2 = '1') then q22 <= not q33;
	end if;
	end if;
	
	q2 <= q22;
	end process;

    jk3 : process (clock, j3, k3, q33)

begin 

	if clock = '0' then 	
	if (j3= '0' and k3 = '0') then q33 <= q33;
	elsif (j3= '0' and k3 = '1') then q33 <= '0';
	elsif (j3= '1' and k3 = '0') then q33 <= '1';
	elsif (j3= '1' and k3 = '1') then q33 <= not q33;
	end if;
	end if;

end process;

end Behavioral;

