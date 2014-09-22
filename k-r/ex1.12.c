#include <stdio.h>

#define	IN	1 /* within word */
#define OUT	0 /* out of word */

/* print each word on new line */
main()
{
	int	c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		++ nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			putchar('\n');
			continue;
		}
		else if(state == OUT) {
			state = IN;
			++nw;
		}
		putchar(c);
	}
	printf("%d %d %d\n", nl, nw, nc);
}
