-- Generation properties:
--   Format              : hierarchical
--   Generic mappings    : exclude
--   Leaf-level entities : direct binding
--   Regular libraries   : use library name
--   View name           : include
--   
LIBRARY lab6_lib;
CONFIGURATION vending_machine_struct_config OF vending_machine IS
   FOR struct
      FOR ALL : next_state_logic
         USE CONFIGURATION lab6_lib.next_state_logic_struct_config;
      END FOR;
      FOR ALL : vm_circuit
         USE CONFIGURATION lab6_lib.vm_circuit_struct_config;
      END FOR;
   END FOR;
END vending_machine_struct_config;
