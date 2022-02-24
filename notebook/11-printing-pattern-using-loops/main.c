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
int main(void)
{
    int i, j, k;
    int n;
    scanf("%d", &n);

  	// Complete the code to print the pattern.
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; j > n - i; j--)
        {
            printf("%d ", j);
        } // end for

        for (j = 1; j <= n - i; j++)
        {
            printf("%d ", n - i + 1);
        } // end for

        for (j = n - i; j >= 1; j--)
        {
            printf("%d ", n - i + 1);
        } // end for

        k = n - i + 2;
        for (j = 1; j <= i - 1; j++)
        {
            printf("%d ", k), k++;
        } // end for
        putchar('\n');
    } // end for

    for (i = 1; i < n; i++)
    {
        for (j = n; j >= i + 1; j--)
        {
            printf("%d ", j);
        } // end for

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", i + 1);
        } // end for

        for (j = i + 1; j <= n; j++)
        {
            printf("%d ", j);
        } // end for
        putchar('\n');
    } // end for

    return EXIT_SUCCESS;
} // end of function main
