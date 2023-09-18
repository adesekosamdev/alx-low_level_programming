#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 * Return: nothing
 **/

void puts_half(char *str)
{
	int i, l, second_half_l;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	second_half_l = l / 2;

	if ((l % 2) != 0)
		second_half_l = ((l + 1) / 2);

	for (i = second_half_l; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
