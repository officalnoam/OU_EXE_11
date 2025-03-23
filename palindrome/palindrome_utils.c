#include "palindrome_utils.h"
#include <string.h>

/*
This function will go over the string- and compare the characters from the beginnign and the end
of the string- if at any point they aren't the same, the function will return false, since that
will mean the string isn't a palindrome.
Otherwise, since all the characters match the character on the other side of the string- true is returned.
*/
bool check_if_string_is_palindrome(char* str) {
  int i;
  for (i=0; i <= strlen(str) / 2; i++)
  {
    if (str[i] != str[strlen(str) - i - 1])
      return false;
  }
  return true;
}
