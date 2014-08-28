#include <stdio.h>

/* print temperature table by Fahrengh */
main()
{
	int	fahr, celsius;
	int	lower, upper, step;

	lower = 0;	/* low margin */
	upper = 300;	/* up margin */

	step = 20;	/* calc step */
	
	fahr = lower;
	while(fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
