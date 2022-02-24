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
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int i = a; i <= b; i ++)
    {
        if(i >= 1 && i <= 9)
        {
            switch (i)
            {
            case 1:
                puts("one");
                break;
            case 2:
                puts("two");
                break;
            case 3:
                puts("three");
                break;
            case 4:
                puts("four");
                break;
            case 5:
                puts("five");
                break;
            case 6:
                puts("six");
                break;
            case 7:
                puts("seven");
                break;
            case 8:
                puts("eight");
                break;
            case 9:
                puts("nine");
                break;
            } // end switch

        } // end if
        else 
        {
            if (i % 2 == 0)
            {
                printf("even\n");
            } // end if
            else
            {
                printf("odd\n");
            } // end else

        } // end else

    } // end for
    return EXIT_SUCCESS;
} // end of function main
