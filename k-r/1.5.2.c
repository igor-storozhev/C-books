#include <stdio.h>

/* count symbols */
main ()
{
	long	nc;
	nc = 0;
	while(getchar() != EOF) {
		++ nc;
	}
	printf("%ld\n", nc);
}
