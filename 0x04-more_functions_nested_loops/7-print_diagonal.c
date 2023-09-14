#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of diagonal line
 * Return: always nothing
 **/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i >= 2)
			{
				for (j = 2; j <= i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
