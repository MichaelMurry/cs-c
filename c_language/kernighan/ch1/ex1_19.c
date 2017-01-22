/* Exercise 1-19. Write a program that includes a function reverse(s) that reverses the character string s.
	Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int ngetline(char line[], int lim);
void reverse(char rline[]);

/* print longest input line */
int main()
{
    int len;                    /* current line length */
    char line[MAXLINE];         /* current input line */

    while ((len = ngetline(line, MAXLINE)) > 0)
    {
	reverse(line); 
        printf("%s", line);
    }

    return 0;
}

/* ngetline: read a line into s, return length */
int ngetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* reverse: reverse the character string s */
void reverse(char rline[])
{
    char tmp;	/* temporary reverse string */
    int i, j;

    for (i=0; rline[i]!='\0'; ++i) /* determine ultimate printable characters in the line */
    ;
    --i;
    
    if(rline[i] == '\n') /* subtract from counter if last item is a newline character*/
    --i;

    j = 0;

    while (j < i)
    {
	tmp = rline[j];
        rline[j] = rline[i];
        rline[i] = tmp;
        --i;
        ++j;
    }
}

