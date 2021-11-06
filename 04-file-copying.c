#include <stdio.h>

/* Exercise 1-6 and 1-7 */
int main()
{
	int c;

	printf("EOF = %d\n", EOF);

	while (c = getchar() != EOF)
		printf("c = %d\n", c);
}
