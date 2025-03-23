#include "binary_utils.h"
#include <stdlib.h>
#include <stdio.h>

/*
This function initializes an array of integers, the length of the amount of bits an integer has
with all items in the list initalizes to 1. 
*/
int* create_empty_binary()
{
  int i;
  int* binary = (int*) malloc(BYTES_TO_BITS(sizeof(int)) * sizeof(int));
  
  if (binary==NULL)
  {
    printf("Memory allocation failed");
    return NULL;
  }

  /*Set all of the integers in the list to 0*/
  for (i=0; i < sizeof(int) * 8; i++)
    binary[i] = 0;

  return binary;
}

/*
This function will get a number in its decimal form, and then convert it to its binary representation.
The binary representation will be returned as a list of integers.
The conversion is done by assigning values from right to left of the list.
In each iteration- the num % 2 will be assigned to the appropriate place in the list, 
and then num will be devided by 2.
*/
int* convert_decimal_to_binary(unsigned int num)
{
  int next_bit_index = BYTES_TO_BITS(sizeof(int)) - 1;
  int* binary = NULL;
  binary = create_empty_binary();
  
  if (binary == NULL)
    return NULL;

  while (num != 0)
  {
    binary[next_bit_index] = num % 2;
    num = num / 2;
    next_bit_index--;
  }
  return binary;
}

