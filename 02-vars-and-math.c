#include <stdio.h>

#define  LOWER  0
#define  UPPER  300
#define  STEP   20

/* print Fahrenheit-Celsius table */
int main()
{
	int fahr;

	printf("Fahrenheit\tCelsius\n=======================\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d\t\t%7.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
