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
enum {MAX_SIZE = 100};

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
    //
    // here we allocate memory for are input
    char *str = malloc(sizeof(*str) * MAX_SIZE);
    
    //
    // The fgets function includes the newline.
    //
    // So we process the string with the handy
    // strip new line utility function.  
    fgets(str, MAX_SIZE, stdin);
    stripNewLine(str);
  	
    puts("Hello, World!");
    puts(str);

    free(str);
    return EXIT_SUCCESS;
} // end of function main
