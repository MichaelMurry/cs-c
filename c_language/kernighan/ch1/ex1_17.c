/* Exercise 1-7. Write a program to print all input lines that are longer than 80 characters */

#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */
#define LIMIT 80	/* limit of character per line */

int ngetline(char line[], int lim);

/*print longest input line */
int main()
{
    int len;			/* current line length */
    char line[MAXLINE];		/* current input line */
    char longest[MAXLINE];	/* longest line saved here */

    while ((len = ngetline(line, MAXLINE)) > 0) 
	if (len > LIMIT) {
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
