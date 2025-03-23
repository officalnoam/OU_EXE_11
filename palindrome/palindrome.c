#include "palindrome.h"
#include "palindrome_utils.h"
#include "string_utils.h"
#include <stdio.h>
#include <stdlib.h>

/*
This function, after receiving a string will remove the whitespaces from it
(since according to the exercise they should be ignored) and then check if the string is a palindrome.
*/
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
  
  if (str == NULL)
    return 1;

  printf("Inputted string is: %s\n", str);
  result = palindrome(str);
  if (result)
    printf("The string is a palindrome\n");
  else
    printf("The string is not a palindrome\n");
  free(str);
  return 1;
}
