//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

enum {SIZE = 1024};

// main is where program execution starts
int main(void)
{
    char *s, *token, *skip = " ";
    s = malloc(SIZE * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    //
    // here we are using the standerd token function
    // which should get the tokens from the string
    //
    token = strtok(s, skip);
    while(token != NULL)
    {
        //
        // then in here we print a token and scan the
        // string until we hit a delimiter.
        //
        printf("%s\n", token);
        token = strtok(NULL, skip);
    } // end while

    //
    // then we free memory from the string we
    // were using to we don't get memory leaks.
    //
    free(s);
    return EXIT_SUCCESS;
} // end of function main
