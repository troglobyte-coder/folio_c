//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

//
// Complete the simpleArraySum function below.
//
int simpleArraySum(int ar_count, int* ar) {
    int sum = 0;
    for (int index = 0; index < ar_count; ++index)
    {
        sum += *(ar + index);
    } // end for
    return sum;
} // end of function simpleArraySum

// main is where program execution starts
int main(void)
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* ar_count_endptr;
    char* ar_count_str = readline();
    int ar_count = strtol(ar_count_str, &ar_count_endptr, 10);

    if (ar_count_endptr == ar_count_str || *ar_count_endptr != '\0')
    {
        return EXIT_FAILURE;
    } // end if

    char** ar_temp = split_string(readline());

    int ar[ar_count];

    for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
        char* ar_item_endptr;
        char* ar_item_str = ar_temp[ar_itr];
        int ar_item = strtol(ar_item_str, &ar_item_endptr, 10);

        if (ar_item_endptr == ar_item_str || *ar_item_endptr != '\0') { exit(EXIT_FAILURE); }

        ar[ar_itr] = ar_item;
    } // end for

    int result = simpleArraySum(ar_count, ar);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);
    return EXIT_SUCCESS;
} // end of function main

//
// Utility from HackerRank
//
char* readline()
{
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true)
    {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    } // end while

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    } // end if

    data = realloc(data, data_length);

    return data;
} // end of function readline

//
// Utility from HackerRank
//
char** split_string(char* str)
{
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token)
    {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits)
        {
            return splits;
        } // end if

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    } // end while

    return splits;
} // end of function split_string
