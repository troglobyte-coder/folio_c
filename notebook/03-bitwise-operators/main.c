//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


//
// Complete the following function.
//
void calculateTheMaximum(int n, int k)
{
    // Write your code here.
    int mxAnd = 0, mxOr = 0, mxXor = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(mxAnd < (i & j) && (i & j) < k)
            {
                mxAnd = i & j;
            } // end if

            if(mxOr < (i | j) && (i | j) < k)
            {
                mxOr = i | j;
            } // end if

            if(mxXor < (i ^ j) && (i ^ j) < k)
            {
                mxXor = i ^ j;
            } // end if

        } // end for

    } // end for
    printf("%d\n", mxAnd);
    printf("%d\n", mxOr);
    printf("%d\n", mxXor);
} // end of function calculateTheMaximum

// main is where program execution starts
int main(void)
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculateTheMaximum(n, k);

    return EXIT_SUCCESS;
} // end of function main
