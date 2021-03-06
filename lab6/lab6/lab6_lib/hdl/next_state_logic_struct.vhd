-- VHDL Entity lab6_lib.next_state_logic.symbol
--
-- Created:
--          by - mrn2.ews (eceb-2022-20.ews.illinois.edu)
--          at - 18:39:18 10/17/16
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2012.1 (Build 6)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;

ENTITY next_state_logic IS
   PORT( 
      S0     : IN     std_logic;
      S1     : IN     std_logic;
      S2     : IN     std_logic;
      T      : IN     std_logic;
      S0plus : OUT    std_logic;
      S1plus : OUT    std_logic;
      S2plus : OUT    std_logic
   );

-- Declarations

END next_state_logic ;

--
-- VHDL Architecture lab6_lib.next_state_logic.struct
--
-- Created:
--          by - mrn2.ews (eceb-2022-20.ews.illinois.edu)
--          at - 18:39:18 10/17/16
--
-- Generated by Mentor Graphics' HDL Designer(TM) 2012.1 (Build 6)
--
LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;


ARCHITECTURE struct OF next_state_logic IS

   -- Architecture declarations

   -- Internal signal declarations
   SIGNAL dout  : std_logic;
   SIGNAL dout3 : std_logic;
   SIGNAL dout4 : std_logic;
   SIGNAL dout5 : std_logic;



BEGIN

   -- ModuleWare code(v1.9) for instance 'U_1' of 'and'
   S0plus <= dout4 AND dout5;

   -- ModuleWare code(v1.9) for instance 'U_4' of 'and'
   S1plus <= S2 AND dout3;

   -- ModuleWare code(v1.9) for instance 'U_0' of 'inv'
   dout4 <= NOT(S2);

   -- ModuleWare code(v1.9) for instance 'U_2' of 'inv'
   dout5 <= NOT(S1);

   -- ModuleWare code(v1.9) for instance 'U_3' of 'inv'
   dout3 <= NOT(S0);

   -- ModuleWare code(v1.9) for instance 'U_5' of 'inv'
   dout <= NOT(T);

   -- ModuleWare code(v1.9) for instance 'U_6' of 'inv'
   S2plus <= NOT(dout);

   -- Instance port mappings.

END struct;
