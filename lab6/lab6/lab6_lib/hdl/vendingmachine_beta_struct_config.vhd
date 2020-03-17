-- Generation properties:
--   Format              : hierarchical
--   Generic mappings    : exclude
--   Leaf-level entities : direct binding
--   Regular libraries   : use library name
--   View name           : include
--   
LIBRARY lab6_lib;
CONFIGURATION vendingmachine_beta_struct_config OF vendingmachine_beta IS
   FOR struct
      FOR ALL : nextstatelogic_beta
         USE CONFIGURATION lab6_lib.nextstatelogic_beta_struct_config;
      END FOR;
      FOR ALL : vm_circuit
         USE CONFIGURATION lab6_lib.vm_circuit_struct_config;
      END FOR;
   END FOR;
END vendingmachine_beta_struct_config;
