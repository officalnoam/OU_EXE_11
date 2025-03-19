#include "palindrome.h"
#include "palindrome_utils.h"
#include "string_utils.h"
#include <stdio.h>
#include <stdlib.h>

int palindrome(char s[])
{
  remove_whitespaces_from_string(s);
  if (check_if_string_is_palindrome(s))
    return 1;
  return 0;
}

int main()
{
  char* str = get_string_from_user();
  int result;
  
  printf("Inputted string is: %s\n", str);
  result = palindrome(str);
  if (result)
    printf("The string is a palindrome\n");
  else
    printf("The string is not a palindrome\n");
  free(str);
  return 1;
}
