#include <stdio.h>

#define	IN	1 /* within word */
#define OUT	0 /* out of word */
#define		MAXLEN	30
/* output histograms of input words */
main()
{
	int	c, i, w, state, ii;
	int	wlen[MAXLEN]; /* symbols in one word max */

	for(i = 0; i < MAXLEN; ++i)
		wlen[i] = 0;
	state = OUT;
	w = 0;
	while((c = getchar()) != EOF)
		if(c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if(w > 0 && w < MAXLEN)
				++wlen[w];
			w = 0;
		}
		else if(state == OUT) {
			state = IN;
			++w;
		}
		else
			++w;
	for(i = 0; i < MAXLEN; ++i) 
		if(wlen[i])
			printf("%d-%d; ", i, wlen[i]);
	for(i = 0; i < MAXLEN; ++i) {
		printf("\n%2d-%4d: ", i, wlen[i]);
		for(ii = 0; ii < wlen[i]; ++ii)
			putchar('*');
	}
	putchar('\n');
}

