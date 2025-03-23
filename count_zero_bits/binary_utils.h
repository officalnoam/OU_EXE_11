#ifndef BINARY_UTILS
  #define BINARY_UTILS
  #define BYTES_TO_BITS(x) (x * 8)

  /*
  This function will create a list representing an integer- with all bits of the binary number set as zero.
  
  Output-
    int*: The list representing the binary number.
  */
  int* create_empty_binary();

  /*
  This function will convert an unsigned integer from a decimal representation to a binary representation.
  The binary representation will pad the binary representation with 0s so it is the proper size for an integer.
  
  Input-
    unsigned int num: The decimal representation of the number.
  Output-
    jnt*: The binary representation of the number
  */
  int* convert_decimal_to_binary(unsigned int num);
#endif
