#include <stdio.h>
#define MAXLINE 1000 	/* max input string size */
#define MAXSTR 80 	/* max string length */

int getline2(char line[], int lim);
void copy(char to[], char from[]);

/* print input string which is more than 80 symbols */
main()
{
	int	len;	/* current string length */
	int	max;	/* max string length */
	char	line[MAXLINE];		/* current string */

	max = 0;
	while((len = getline2(line, MAXLINE)) > 0)
		if(len > MAXSTR) 
			printf("%s", line);
	return 0;
}

/* getline2: read string into s, return length of s */
int getline2(char s[], int lim)
{
	int	c, i;
	
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
