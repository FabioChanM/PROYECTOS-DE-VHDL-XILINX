
-- VHDL Instantiation Created from source file bcd7segementos.vhd -- 09:46:24 09/24/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT bcd7segementos
	PORT(
		ent : IN std_logic_vector(3 downto 0);          
		selec : OUT std_logic_vector(3 downto 0);
		BCD : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_bcd7segementos: bcd7segementos PORT MAP(
		ent => ,
		selec => ,
		BCD => 
	);


