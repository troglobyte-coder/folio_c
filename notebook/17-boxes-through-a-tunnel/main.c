//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


struct box
{
    /**
    * Define three fields of type int: length, width and height
    */
    int length;
    int width;
    int height;
}; // end struct

typedef struct box box;


int get_volume(box b)
{
    /**
    * Return the volume of the box
    */
    return b.length * b.width * b.height;
} // end of function get_volume


int is_lower_than_max_height(box b)
{
    /**
    * Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
    */
    return (b.height < MAX_HEIGHT)? 1 : 0;
} // en of function is_lower_than_max_height


//
// main is where program execution starts
int main()
{
    int n;
    scanf("%d", &n);
    box *boxes = malloc(n * sizeof(box));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    } // end for
    for (int i = 0; i < n; i++)
    {
        if (is_lower_than_max_height(boxes[i]))
        {
            printf("%d\n", get_volume(boxes[i]));
        } // end if
    } // end for 
    return EXIT_SUCCESS;
} // end of function main