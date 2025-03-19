both: palindrome

palindrome: palindrome/palindrome.o palindrome/palindrome_utils.o palindrome/string_utils.o
	gcc -ansi -Wall -pedantic -o palindrome.exe palindrome/palindrome.o palindrome/palindrome_utils.o palindrome/string_utils.o

palindrome/string_utils.o: palindrome/string_utils.c palindrome/string_utils.h
	gcc -ansi -Wall -pedantic -c palindrome/string_utils.c -o palindrome/string_utils.o

palindrome/palindrome_utils.o: palindrome/palindrome_utils.c palindrome/palindrome_utils.h palindrome/boolean.h
	gcc -ansi -Wall -pedantic -c palindrome/palindrome_utils.c -o palindrome/palindrome_utils.o

palindrome/palindrome.o: palindrome/palindrome.c palindrome/palindrome.h palindrome/string_utils.h palindrome/palindrome_utils.h
	gcc -ansi -Wall -pedantic -c palindrome/palindrome.c -o palindrome/palindrome.o

cleanup:
	rm palindrome/*.o
