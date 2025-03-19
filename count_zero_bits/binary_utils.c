#include "binary_utils.h"
#include <stdlib.h>
#include <stdio.h>

/*
This function will create a list representing an integer- with all bits of the binary number set as zero.

Output-
  int*: The list representing the binary number.
*/
int* create_empty_binary()
{
  int i;
  int* binary = (int*)malloc((sizeof(int)*8+1)*sizeof(int));
  
  if (binary==NULL)
  {
    printf("Memory allocation failed");
    return NULL;
  }

  for (i=0; i<sizeof(int)*8;i++)
    binary[i] = 0;

  binary[sizeof(int)*8] = '\0';
  return binary;
}

/*
This function will convert an unsigned integer from a decimal representation to a binary representation.
The binary representation will pad the binary representation with 0s so it is the proper size for an integer.

Input-
  unsigned int num: The decimal representation of the number.
Output-
  jnt*: The binary representation of the number
*/
int* convert_decimal_to_binary(unsigned int num)
{
  int next_bit_index = sizeof(int) * 8 - 1;
  int* binary = NULL;
  binary = create_empty_binary();
  while (num != 0)
  {
    binary[next_bit_index] = num % 2;
    num = num / 2;
    next_bit_index--;
  }
  return binary;
}

