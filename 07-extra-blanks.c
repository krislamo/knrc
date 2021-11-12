#include <stdio.h>

int main()
{
	int c;
	int l;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && c == l) {
			;
		} else {
			printf("%c", c);
			l = c;
		}
	}
}
