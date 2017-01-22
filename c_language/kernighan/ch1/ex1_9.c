/* Exercise 1-9. Write a program to copy its input to its output, 
	replacing each string of one or more blanks by a single blank */

#include <stdio.h>

/* count lines in input */
main()
{
    int c, pc;

    pc = EOF;

    while ((c = getchar()) != EOF) {
        if (c == ' ' && pc == ' ')
            ;
	else
	    putchar(c);
        
        pc = c;
    }
}
