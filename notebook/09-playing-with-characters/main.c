//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//
// here we define an enum that holds the max
// size of are input values.
enum { MAX_SIZE = 20};

//
// here we need to process are given input by
// removing the new line char.
void stripNewLine(char* string)
{
    size_t length = strlen(string);
    if((length > 0) && (*(string + length - 1) == '\n'))
    {
        *(string + length - 1) ='\0';
    } // end if

} // end of function stripNewLine

// main is where program execution starts
int main(void)
{
    // Enter your code here. Read input from STDIN. Print output to STDOUT
    char *ch = malloc(sizeof(*ch) * MAX_SIZE);
    char *str = malloc(sizeof(*str) * MAX_SIZE);
    char *sen = malloc(sizeof(*sen) * MAX_SIZE);

    //
    // here we use fgets to scanf.
    fgets(ch, MAX_SIZE, stdin);
    fgets(str, MAX_SIZE, stdin);
    fgets(sen, MAX_SIZE, stdin);

    stripNewLine(ch);
    stripNewLine(str);
    stripNewLine(sen);

    puts(ch);
    puts(str);
    puts(sen);

    //
    // here we free memory after it is used.
    free(ch);
    free(str);
    free(sen);
    return EXIT_SUCCESS;
} // end of function main
