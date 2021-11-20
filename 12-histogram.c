#include <stdio.h>

#define IN       1
#define OUT      0
#define MAXERROR "WARNING: Word length '%d' exceeded 99\n"

int main()
{
	int c, i, j, state, count, top;
	int wordl[100];

	count = state = top = OUT;
	for(i = 0; i < 100; ++i)
		wordl[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (count > 0 && count < 100)
				++wordl[count];
			else if (count >= 100)
				printf(MAXERROR, count);
			count = 0;
		} else {
			++count;
			if (state == OUT)
				state = IN;
		}
	}

	if (count > 0 && count < 100)
		++wordl[count];
	else if (count >= 100)
		printf(MAXERROR, count);

	for (i = 0; i < 100; ++i)
		if (wordl[i] > top)
			top = wordl[i];

	printf("\n");
	for (i = 0; i < 100; ++i)
		if (wordl[i] > 0)
			printf("%2d ", i);

	printf("\n");
	for (i = 1; i <= top; ++i) {
		for (j = 0; j < 100; ++j) {
			if (wordl[j] >= i)
				printf(" # ");
			else if (wordl[j] > 0)
				printf("   ");
		}
		printf("\n");
	}
}
