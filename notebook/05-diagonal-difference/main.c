//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

//
// Complete the 'diagonalDifference' function below.
//
// The function is expected to return an INTEGER.
// The function accepts 2D_INTEGER_ARRAY arr as parameter.
//
int diagonalDifference(int arr_rows, int arr_columns, int** arr)
{
    int sum1 = 0, sum2 = 0;
    int col = 0;

    for (size_t row = 0; row < arr_rows; ++row)
    {
        sum1 += arr[row][col];
        col++;
    } // end for

    col = arr_columns - 1;
    for (size_t row = 0; col > -1; ++row)
    {
        sum2 += arr[row][col];
        col--;
    } // end for
    int diff = sum1 - sum2;
    return (diff < 0)? (diff = 0 - diff) : diff;
} // end of function diagonalDifference

// main is where program execution starts
int main(void)
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int n = parse_int(ltrim(rtrim(readline())));

    int** arr = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        *(arr + i) = malloc(n * (sizeof(int)));

        char** arr_item_temp = split_string(rtrim(readline()));

        for (int j = 0; j < n; j++) {
            int arr_item = parse_int(*(arr_item_temp + j));

            *(*(arr + i) + j) = arr_item;
        }
    }

    int result = diagonalDifference(n, n, arr);

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

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = NULL;

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = NULL;
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = NULL;
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
} // end of function readline

//
// Utility from HackerRank
//
char* ltrim(char* str)
{
    if (!str)
    {
        return NULL;
    } // end if

    if (!*str)
    {
        return str;
    } // end if

    while (*str != '\0' && isspace(*str))
    {
        str++;
    } // end while

    return str;
} // end of function ltrim

//
// Utility from HackerRank
//
char* rtrim(char* str)
{
    if (!str)
    {
        return NULL;
    } // end if

    if (!*str)
    {
        return str;
    } // end if

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end))
    {
        end--;
    } // end while

    *(end + 1) = '\0';

    return str;
} // end of function rtrim

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

//
// Utility from HackerRank
//
int parse_int(char* str)
{
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0')
    {
        exit(EXIT_FAILURE);
    } // end if

    return value;
} // end of function parse_int
