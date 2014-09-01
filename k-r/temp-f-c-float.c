#include <stdio.h>

/* print temperature table by Fahrengh */
main()
{
	float	fahr, celsius;
	int	lower, upper, step;

	lower = 0;	/* low margin */
	upper = 300;	/* up margin */

	step = 20;	/* calc step */
	
	printf("Fahrenheit Celcius\n");
	fahr = lower;
	while(fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32);
		printf("   %3.0f     %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
