#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int print_f_to_c(int start, int end, int step);

main()
{

	print_f_to_c(LOWER, UPPER, STEP);

	return 0;
}

int print_f_to_c(int start, int end, int step)
{
	int	fahr;

	for(fahr = start; fahr <= end; fahr = fahr + step)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	return 0;
}
