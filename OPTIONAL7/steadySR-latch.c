#include <stdlib.h>
#include <stdio.h>

// The following function prints out all the stable states of the sample 
// circuit (an S-R latch) that appears in this exercise's PDF file.

int main(int argc, char const *argv[]){

    int R;
    int S;
    int assumed_Q;
    int Q_orig;
    int Q_bar;
    int Q_final;

    // use forloops to get all possible combinations
    for( R = 0; R <= 1; R++ ){
	for( S = 0; S <= 1; S++ ){
	    for( assumed_Q = 0; assumed_Q <= 1; assumed_Q++ ){
		
		// Set initial value of Q to the value assumed.
		Q_orig = assumed_Q;

		// Simulate the behavior of gates around the feedback
		// loop until reaching Q again.
		Q_bar = ~(Q_orig | S);
		Q_final = ~(Q_bar | R);

		// Remove any higher-order bits (which may be set by 1's 
		// complement operations ~) in the values to be compared.
		Q_bar = (Q_bar & 1);
		Q_final = (Q_final & 1);

		// If the calculated output is the same as its assumed 
		// value, a steady state has been found.
		if ( Q_orig == Q_final ){
		    printf("%d %d %d %d\n",R,S,Q_orig,Q_bar);
		}
	    }
	}
    }

    return 0;
}
