/* Exercise 1-7. Write a program to print the value of EOF */

#include <stdio.h>

/* copy input to output */
main()
{   
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);
    printf("The value of EOF is %d\n", EOF);
}
