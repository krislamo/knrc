#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define MINLINE 81

int getline(char line[], int maxline);
void copy(char to[], char from[]);
void trim(char line[], int len);

/* print longest input line */
main()
{
	int len;
	int max;
	int c;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getline(line, MAXLINE)) > 0) {
		if (line[len-1] != '\n') {
			while ((c=getchar())!=EOF && c!='\n')
				++len;
			if (c == '\n')
				++len;
		}
		if (len >= MINLINE) {
			trim(line, len);
			printf("%s", line);
		}
	}
	return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to': assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}

/* trim: remove extraneous blanks and tabs */
void trim(char s[], int len)
{
	int i;

	for (i = len-2; i >= 0; --i)
		if (s[i] == ' ' || s[i] == '\t')
			s[i] = '\0';
		else
			return;
}
