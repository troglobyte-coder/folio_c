//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

//
// This function reads four arguments and
// returns the greatest of them.
int max_of_four(int a, int b, int c, int d)
{
    if(a > b && a > c && a > d)
    {
        return a;
    } // end if
    if (b > a && b > c && b > d)
    {
        return b;
    } // end if
    if (c > a && c > b && c > d)
    {
        return c;
    } // end if
    else
    {
        return d;
    } // end else
} // end of function max_of_four

// main is where program execution starts
int main(void)
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return EXIT_SUCCESS;
} // end of function main
