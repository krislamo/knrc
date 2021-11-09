#include <stdio.h>

int main()
{
	int c, b, t, n;

	b = 0;
	t = 0;
	n = 0;
	while ((c = getchar ()) != EOF) {
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
		if (c == '\n')
			++n;
	}
	printf("blanks   = %d\n", b);
	printf("tabs     = %d\n", t);
	printf("newlines = %d\n", n);
}
