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
    int num, iter, *arr, *reversed;

    scanf("%d", &num);
    reversed = malloc(num * sizeof(int));
    arr = malloc(num * sizeof(int));

    //
    // Here we read in the users data into the
    // first array 'arr'.
    for(iter = 0; iter < num; iter++)
    {
        scanf("%d", arr + iter);
    } // end for

    //
    // Here we set the values in are new array
    // in reversed order starting from the
    // back of the array going down.
    //
    for (iter = 0; iter < num; iter++)
    {
        *(reversed + num - 1 - iter) = *(arr + iter);
    } // end for

    //
    // then we copy that data from the new array
    // over to the old array.
    //
    for (iter = 0; iter < num; iter++)
    {
        *(arr + iter) = *(reversed + iter);
    } // end for

    //
    // next we print the items in this array
    // which should be in reversed order from
    // what the user enterd in.
    //
    for(iter = 0; iter < num; iter++)
    {
        printf("%d ", *(arr + iter));
    } // end for

    free(arr);
    free(reversed);

    return EXIT_SUCCESS;
} // end of function main
