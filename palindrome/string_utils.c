#include "string_utils.h"
#include <stdio.h>
#include <stdlib.h>

/*
This function will get a string from the user.
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
This function checks if a specific character is a 'whitespace', meaning a space, tab, newline or EOF.
*/
bool check_if_char_is_whitespace(char c) {
  if (c == ' ' || c == '\t' || c == '\n' || c == EOF)
    return true;
  return false;
}

/*
This function removes whitespaces from a string- it will save the index of the last char starting at 0,
and then go over the string. If a character is a whitespace, the loop will continue.
If not, then the character will be put in the index for the last character.
this allows to override the spaces within a string while going over it, while 
keeping all non whitespace characters the same.
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
