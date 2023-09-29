#include "main.h"


char *_rev_recursion(int i, char *s)
{
	char *rev[2000];

	if (*s == '\0')
	{
		return (0);
	}
	rev[i] = s;
	s++;
	_rev_recursion((i - 1), s);
	return (*rev);
}

int _strcomp(char *a, char *b)
{
	if (*a != *b)
		return (0);
	a++;
	b++;
	return (1 * (_strcomp(a, b)));
}

int is_palindrome(char *s)
{
	int l;
	char *rev;

	l = _strlen_recursion(s);

	rev = _rev_recursion((l - 1), s);
	rev[l] = '\0';

	return (_strcomp(rev, s));
}
