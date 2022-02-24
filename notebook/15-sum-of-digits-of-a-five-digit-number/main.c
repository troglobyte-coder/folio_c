//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// main is where program execution starts
int main(void)
{
    char x[5];
    scanf("%s", x);

    //
    // Complete the code to calculate the sum of the five digits on n.
    printf("%d", x[0] - '0' + x[1] - '0' + x[2] - '0' + x[3] - '0' + x[4] - '0');
    return EXIT_SUCCESS;
} // end of function main
