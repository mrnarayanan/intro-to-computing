#include <stdlib.h>
#include <stdio.h>

int main(){
        int in1, in2, in3;             /* The inputs of gates  */
        int gate1_out, gate2_out, Q;   /* The outputs of gates */
        int assumed_val;              

        /* TO DO:       Print a prompt requesting 3 integers. */


        /* TO DO:       Use scanf to read three integers:     */
        /*                             in1, in2, and in3      */


        /* TO DO:       Find all of the steady states         */

	printf("Stable state found at %d %d %d %d %d %d\n",in1,in2,in3,gate1_out&1,gate2_out&1,Q&1);

	return 0;
}
