//
// file: main.c
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Complete the following function.
int marks_summation(int* marks, int number_of_students, char gender)
{
  int sum1 = 0, sum2 = 0;
  for(int index = 0; index < number_of_students; index++)
  {
      if (index % 2 == 0)
      {
        sum1 += *(marks + index);
      } // end if
      else
      {
        sum2 += *(marks + index);
      } // end else
  } // end for
  return (gender == 'b')? sum1 : sum2;
} // end of function marks_summation


// main is where program execution starts
int main(void)
{
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return EXIT_SUCCSESS;
} // end of function main
