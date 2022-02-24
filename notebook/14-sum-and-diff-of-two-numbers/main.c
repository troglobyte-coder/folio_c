//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

// main is where program execution starts
int main(void)
{
	int a, b;
    float c, d;

    //
    // here we ask the user to enter two integers
    // then print sum and abs of the two values
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d %d\n", a + b, a - b);

    //
    // here we ask the user to enter two floats
    // then print sum and abs of the two values
    scanf("%f", &c);
    scanf("%f", &d);
    printf("%.1f %.1f", c + d, c - d);
    return EXIT_SUCCESS;
} // end of function main
