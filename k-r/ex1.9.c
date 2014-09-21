#include <stdio.h>

/* replace spaces with one space */
main()
{
	int	c, spaces;

	spaces = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ')
			spaces = 1;
		else if(spaces) {
			putchar(' ');
			putchar(c);
			spaces = 0;
		}
		else
			putchar(c);
	}
}
