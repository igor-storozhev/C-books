#include <stdio.h>

/* print temperature table by Fahrengh */
main()
{
	float	fahr, celsius;
	int	lower, upper, step;

	lower = -40;	/* low margin */
	upper = 100;	/* up margin */

	step = 20;	/* calc step */
	
	printf("Celsius   Fahrenheit\n");
	celsius = lower;
	while(celsius <= upper) {
		fahr = celsius/(5.0/9.0) + 32;
		printf("   %3.0f     %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
