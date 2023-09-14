#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
**/

void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(49);
				n = ((j - 10) + 48);
			}
			else
			{
				n = j + 48;
			}
			_putchar(n);
		}
		_putchar('\n');
	}
}
