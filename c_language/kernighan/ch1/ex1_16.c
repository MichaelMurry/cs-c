/* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print
	the length of arbitrarily long input lines, and as much as possible of the text */

#include <stdio.h>
#define MAXLENGTH 20

int ngetline(char [],int);
void copy(char [],char []);

int main()
{
    int len;				/* current line length */
    int max;				/* maximum length seen so far */
    char line[MAXLENGTH];		/* current input line */
    char longest[MAXLENGTH];		/* longest line saved here */
    max = 0;

    while((len = ngetline(line, MAXLENGTH)) > 0)
        if(len > max){
            max = len;
            copy(longest, line);
        }
    if(max > 0){
        if(max > MAXLENGTH){
            printf("\n\nStorage limit exceeded by : %d",max-MAXLENGTH);
            printf("\nString length : %d",max);
            printf("\n%s",longest);
        }
        else
            printf("%s",longest);
    }
    return 0;
}

int ngetline(char line[], int limit)
{
    int i;
    int c;

    for(i=0; i<limit-1 && ((c=getchar())!=EOF && c!='\n'); i++)
        line[i] = c;
    if(i == (limit-1)) {
        while((c=getchar())!='\n') {
            ++i;
        }
    }
    if(c=='\n') {        
        line[i] = c;
        ++i;
    }
    line[i]='\0';       
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
