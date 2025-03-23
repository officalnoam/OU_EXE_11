#ifndef STRING_UTILS
  #include "boolean.h"
  
  #define STRING_UTILS
  #define MAX_STRING_SIZE 81 
  
  /*
  This function will get a string from a user.
  
  Output:
    char*: The inputted string from the user. 
  */
  char* get_string_from_user();

  /*
  This function will check if a specific character is a `whitespace` of any type.
  In this context a whitespace wikk be a literal whitespace, a tab character, a newline and an EOF.

  Input-
    char c: The character being checked.

  Output-
    bool: true if the character is a whitespace otherwise false. 
  */
  bool check_if_char_is_whitespace(char c);

  /*
  Removes all whitespaces (whitespaces, tabs, newlines and EOFs) from a string.
  
  Input-
    char* str: The string the whitespaces are being removed from.
  */
  void remove_whitespaces_from_string(char* str);
#endif 
