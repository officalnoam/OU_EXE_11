#include "string_utils.h"
#include <stdio.h>
#include <stdlib.h>

/*
This function will get a string from a user.

Output:
  char*: The inputted string from the user. 
*/
char* get_string_from_user() {
  int i;
  char* str = (char*) malloc((MAX_STRING_SIZE + 1) * sizeof(char));
  if (str == NULL)
  {
    printf("Memory allocation failed");
    return NULL; 
  }

  for (i = 0; i < MAX_STRING_SIZE + 1; i++)
    str[i] = '\0';

  printf("Please input a string that should be checked for being a palindrome:\n");
  fgets(str, MAX_STRING_SIZE, stdin);
  str[MAX_STRING_SIZE] = '\0';
  return str;
}
/*
This function will check if a specific character is a `whitespace` of any type.
In this context a whitespace wikk be a literal whitespace, a tab character, a newline and an EOF.

Input-
  char c: The character being checked.

Output-
  bool: true if the character is a whitespace otherwise false. 
*/
bool check_if_char_is_whitespace(char c) {
  if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
    return true;
  return false;
}

/*
Removes all whitespaces (whitespaces, tabs, newlines and EOFs) from a string.

Input-
  char* str: The string the whitespaces are being removed from.
*/
void remove_whitespaces_from_string(char* str) {
  int lastCharIndex = -1;
  int i;
  for (i = 0; i < MAX_STRING_SIZE; i++)
  {
    /* If we reach the \0 the string is complete and there is no need to continue iterating over it */
    if (str[i] == '\0')
      break;

    /* If the character is not a whitespace, set the char to the next space since the latest non whitespace character.
     Allows to override all whitespaces/tabs etc from the string over the for loop.
    */
    if (!check_if_char_is_whitespace(str[i]))
    {
      lastCharIndex++;
      str[lastCharIndex]=str[i];
    }
  }
  str[lastCharIndex+1] = '\0';
}
