#include <stdio.h>

/* print Celsius-Fahrenheit table */
int main()
{
	int cels;

	printf("Celsius\t\tFahrenheit\n==========================\n");
	for (cels = 0; cels <= 300; cels = cels + 20)
		printf("%3d\t\t%10.0f\n", cels, (9.0/5.0)*cels+32);
}
