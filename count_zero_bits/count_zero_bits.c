#include "count_zero_bits.h"
#include "binary_utils.h"
#include <stdio.h>
#include <stdlib.h>

/*
This function will convert the number to its binary representation, and then count the 0s in the representation. 
*/
int count_zero_bits(unsigned int num)
{
  int i;
  int zero_bits = 0;
  int* binary = convert_decimal_to_binary(num);
  
  if (binary == NULL)
    return -1;
  
  /*Count the amount of 0s in the binary representation*/
  for (i = 0; i < BYTES_TO_BITS(sizeof(int)); i++)
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
  
  if (zero_bits == -1)
    return 1;
  
  printf("The number that was inputted was %u. Its binary representation has %d zeros\n", num, zero_bits);
  return 0;
}
