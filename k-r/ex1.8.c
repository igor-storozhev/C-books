#include <stdio.h>

/* count spaces, tab, strings */
main()
{
	int	c, spaces, tab, str;

	spaces = 0;
	tab = 0;
	str = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ')
			++spaces;
		if(c == '\t')
			++tab;
		if(c == '\n')
			++str;
	}
	printf("spaces: %d, tabs: %d, strings: %d\n", spaces, tab, str);
}

