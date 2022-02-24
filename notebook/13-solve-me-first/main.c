//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

//
// Add two numbers and return end result
//
int solveMeFirst(int a, int b)
{
    return a + b;
} // end of function solveMeFirst

// main is where program execution starts
int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum; 
    sum = solveMeFirst(num1, num2);
    printf("%d", sum);

    return EXIT_SUCCESS;
} // end of function main
