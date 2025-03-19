#include "count_zero_bits.h"
#include "binary_utils.h"
#include <stdio.h>
#include <stdlib.h>

/*
This function will count the amount of zero bits in the binary representation of its input.

Input-
  unsigned int num: The number being checked.
Output-
  int: The amount of zero bits
*/
int count_zero_bits(unsigned int num)
{
  int i;
  int zero_bits = 0;
  int* binary = convert_decimal_to_binary(num);
  for (i = 0; i < sizeof(int)*8; i++)
  {
    if (binary[i] == 0)
      zero_bits++;
  }
  free(binary);
  return zero_bits;
}

int main()
{
  unsigned int num;
  int zero_bits;
  
  printf("Please enter a whole positive number whose zero bits (in its binary form) will be counted:\n");
  scanf("%u", &num);
  zero_bits = count_zero_bits(num);
  printf("The number that was inputted was %u. Its binary representation has %d zeros\n", num, zero_bits);
  return zero_bits;
}
