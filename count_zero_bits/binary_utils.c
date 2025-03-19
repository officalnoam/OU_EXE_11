#include "binary_utils.h"
#include <stdlib.h>
#include <stdio.h>

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

