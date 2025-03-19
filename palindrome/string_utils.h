#ifndef STRING_UTILS
  #include "boolean.h"
  
  #define STRING_UTILS
  #define MAX_STRING_SIZE 81 
  
  char* get_string_from_user();
  bool check_if_char_is_whitespace(char c);
  void remove_whitespaces_from_string(char* str);
#endif 
