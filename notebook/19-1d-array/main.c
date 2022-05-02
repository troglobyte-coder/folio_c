//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// main is where program execution starts
int main()
{
    //
    // we first get the users array length
    // then allocate a new array with the
    // users max size from stdin.
    //
    int len = 0;
    scanf("%d", &len);
    
    int *arr = malloc(len * sizeof(int));

    //
    // we then process the new array by putting data
    // from the user into the array and sum the value.
    for (int iter = 0; iter < len; iter++)
    {
        scanf("%d", (arr + iter));
    } // end for

    int sum = 0;
    for (int iter = 0; iter < len; iter++)
    {
        sum += *(arr + iter);
    } // end for

    //
    // here we print the summary to stdout.
    printf("%d", sum);

    free(arr);

    return EXIT_SUCCESS;
} // end of function main
