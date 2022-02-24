//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

//
// Complete this function
//
void update(int *a, int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp > *b ? temp - *b : *b - temp;   
} // end of function update

// main is where program execution starts
int main(void)
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return EXIT_SUCCESS;
} // end of function main
