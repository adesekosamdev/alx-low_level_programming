#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 **/

int _strlen(char *s);

void print_rev(char *s)
{
	int i, l;

	l = 0;

	while (s[l] != 0)
	{
		l++;
	}

	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
