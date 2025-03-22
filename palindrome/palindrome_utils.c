#include "palindrome_utils.h"
#include <string.h>

/*
The function will check if a string is a palindrome or not. This includes whitespaces in the string.

Input-
  char* str: The string being checked.

Output-
  bool: true if the string is a palindrome false otherwise.
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
