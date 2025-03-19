both: palindrome.exe count_zero_bits.exe

palindrome.exe: palindrome/palindrome.o palindrome/palindrome_utils.o palindrome/string_utils.o
	gcc -ansi -Wall -pedantic -o palindrome.exe palindrome/palindrome.o palindrome/palindrome_utils.o palindrome/string_utils.o

palindrome/string_utils.o: palindrome/string_utils.c palindrome/string_utils.h palindrome/boolean.h
	gcc -ansi -Wall -pedantic -c palindrome/string_utils.c -o palindrome/string_utils.o

palindrome/palindrome_utils.o: palindrome/palindrome_utils.c palindrome/palindrome_utils.h palindrome/boolean.h
	gcc -ansi -Wall -pedantic -c palindrome/palindrome_utils.c -o palindrome/palindrome_utils.o

palindrome/palindrome.o: palindrome/palindrome.c palindrome/palindrome.h palindrome/string_utils.h palindrome/palindrome_utils.h
	gcc -ansi -Wall -pedantic -c palindrome/palindrome.c -o palindrome/palindrome.o

count_zero_bits.exe: count_zero_bits/count_zero_bits.o count_zero_bits/binary_utils.o
	gcc -ansi -Wall -pedantic -o count_zero_bits.exe count_zero_bits/count_zero_bits.o count_zero_bits/binary_utils.o

count_zero_bits/binary_utils.o:
	gcc -ansi -Wall -pedantic -c count_zero_bits/binary_utils.c -o count_zero_bits/binary_utils.o

count_zero_bits/count_zero_bits.o:
	gcc -ansi -Wall -pedantic -c count_zero_bits/count_zero_bits.c -o count_zero_bits/count_zero_bits.o

cleanup:
	rm palindrome/*.o
	rm count_zero_bits/*.o
