#include <stdio.h>

/* print Fahrenheit-Celsius table */
int main()
{
	int fahr;

	printf("Fahrenheit\tCelsius\n=======================\n");
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d\t\t%7.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
