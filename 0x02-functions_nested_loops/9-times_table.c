#include "main.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: void
 *
 **/

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			n = (i * j);
			_putchar(',');
			_putchar(' ');

			if (n < 10)
			{
				_putchar(' ');
				_putchar('0' + n);
			}
			else
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
		}
		_putchar('\n');
	}
}
