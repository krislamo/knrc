#include <stdio.h>

#define  LOWER  0
#define  UPPER  300
#define  STEP   20

/* print Celsius-Fahrenheit table */
int main()
{
	int cels;

	printf("Celsius\t\tFahrenheit\n==========================\n");
	for (cels = LOWER; cels <= UPPER; cels = cels + STEP)
		printf("%3d\t\t%10.0f\n", cels, (9.0/5.0)*cels+32);
}
