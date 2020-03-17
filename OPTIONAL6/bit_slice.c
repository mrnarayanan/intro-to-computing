#include <stdlib.h>
#include <stdio.h>

int main()
{

	unsigned int num1, num2;
        int N = 1;
	int i, mask;
	int c1, c0, ai, bi;

	/* TO DO:	Print a prompt requesting 3 integers.                    */
        

	/* TO DO:	Use scanf to read: 2 numbers to be compared              */
        /*                                 N, the number of bits.                */


	/* TO DO:	Return if the number of bits is less or equal to 0       */
	/* 		Since nothing can be compared.                           */


        /* TO DO:       You should initialize prev_result         */
        /*              to be the bit-pattern of equal.           */
	int prev_result;
	c1 = (prev_result >> 1) & 1;
	c0 = prev_result & 1;


	printf("The results are: ");
	/* TO DO:	Use a loop to simulate the bit-sliced comparator.        */
	/* 		Please print out all of the intermediate output(s).      */


	/* The following skeleton code is for comparator from LSB                */
	/* Delete it if you do not need it                                       */
	mask = 1;
	for(i = 0; i < N; i++)
	{
		/* TO DO:	Get input bits ai and bi.                                       */
                /*              Hint: use num1 & mask to get ai, and num2 & mask to get bi.     */
		/* 		Calculate bit-slice outputs using the logic you derived.        */

		/* TO DO:	Print bit-slice result (use decimal value)                      */   

		mask = mask << 1;
	}


	/* The following skeleton code is for comparator from MSB               */
	/* Delete it if you do not need it                                      */
	mask = 1 << (N-1);
	for(i = N-1; i >= 0; i--)
	{
		/* TO DO:	Get input bits ai and bi.                                       */
                /*              Hint: use num1 & mask to get ai, and num2 & mask to get bi.     */
		/* 		Calculate bit-slice outputs using the logic you derived.        */

		/* TO DO:	Print bit-slice result (use decimal value)                      */

		mask = mask >> 1;
	}



	printf("\n");
	return 0;
}
