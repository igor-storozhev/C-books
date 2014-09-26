#include <stdio.h>
#define MAXLINE 1000 	/* max input string size */
#define MAXSTR 80 	/* max string length */

int getline2(char line[], int lim);
void copy(char to[], char from[]);
void reverse(char s[]);

/* print input string which is more than 80 symbols */
main()
{
	int	len;	/* current string length */
	int	max;	/* max string length */
	char	line[MAXLINE];		/* current string */

	max = 0;
	while((len = getline2(line, MAXLINE)) > 0) {
		printf("%s", line);
		reverse(line); 
		printf("%s", line);
	}
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

void reverse(char s[])
{
	char	rev[MAXLINE];
	int	i, j;
	/* find string length */
	for(i = 0; s[i] != '\0'; ++i);
	/* swap symbols in new array */
	rev[i] = s[i]; /* copy \0 */
	i--;
	rev[i] = s[i]; /* copy \n */
	i--;
	for(j = 0; i >= 0; ++j, --i) 
		rev[j] = s[i];
	/* copy result string */
	copy(s, rev);
}

/* copy: copying from to */
void copy(char to[], char from[])
{
	int	i;

	i = 0;
	while((to[i] = from[i]) != 0)
		++i;
}

