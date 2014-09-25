#include <stdio.h>
#define MAXLINE 1000 /* max input string size */

int getline2(char line[], int lim);
void copy(char to[], char from[]);

/* print longest input string */
main()
{
	int	len;	/* current string length */
	int	max;	/* max string length */
	char	line[MAXLINE];		/* current string */
	char	longest[MAXLINE];	/* max string */

	max = 0;
	while((len = getline2(line, MAXLINE)) > 0)
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	if(max > 0)
		printf("%s", longest);
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

/* copy: copying from to */
void copy(char to[], char from[])
{
	int	i;

	i = 0;
	while((to[i] = from[i]) != 0)
		++i;
}
