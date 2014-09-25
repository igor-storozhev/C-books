#include <stdio.h>
#define MAXLINE 1000 	/* max input string size */
#define MAXSTR 80 	/* max string length */
#define	IN	1 /* within word */
#define OUT	0 /* out of word */


int getline2(char line[], int lim);
int del_spaces(char line[], int length);
void copy(char to[], char from[]);

/* remove double \t ' ' and empty strings before print  */
main()
{
	int	len;	/* current string length */
	char	line[MAXLINE];		/* current string */

	while((len = getline2(line, MAXLINE)) > 0) {
		len = del_spaces(line, len);
		if(len != 1)
			printf("%3d: %s", len, line);
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

int del_spaces(char s[], int length)
{
	int	i, j, ws, state;
	char	out[MAXLINE];

	for(i = 0, j = 0; i < length; ++i) {
		if(s[i] == ' ' || s[i] == '\t') {
			state = OUT;
			ws++;
		}
		else if(state == OUT && ws) {
			/* one white space */
			out[j] = ' ';
			j++;
			out[j] = s[i];
			j++;
			state = IN;
			ws = 0;
		}
		else {
			/* copy */
			out[j] = s[i];
			j++;
		}
	}
	/* copy result string */
	length = j;
	out[length] = '\0';
	copy(s, out);
	return length;
}

/* copy: copying from to */
void copy(char to[], char from[])
{
	int	i;

	i = 0;
	while((to[i] = from[i]) != 0)
		++i;
}

