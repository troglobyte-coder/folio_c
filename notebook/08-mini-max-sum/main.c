//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

//
// Complete the miniMaxSum function below.
//
void miniMaxSum(int arr_count, int* arr)
{
    unsigned long long sum = 0;
    unsigned long long min;
    unsigned long long max;
    unsigned long long num;

    for (size_t iter = 0; iter < arr_count; ++iter)
    {
        num = arr[iter];
        sum += num;
        if (iter == 0)
        {
            max = num;
            min = num;
        } // end if
        else
        {
            if (num > max)
            {
                max = num;
            } // end if
            else if (num < min)
            {
                min = num;
            } // end else if

        } // end else

    } // end for
    printf("%u %u\n", (unsigned int)(sum - max), (unsigned int)(sum - min));
} // end of function miniMaxSum

// main is where program execution starts
int main(void)
{
    char** arr_temp = split_string(readline());

    int* arr = malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        char* arr_item_endptr;
        char* arr_item_str = *(arr_temp + i);
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        *(arr + i) = arr_item;
    }

    int arr_count = 5;

    miniMaxSum(arr_count, arr);
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
