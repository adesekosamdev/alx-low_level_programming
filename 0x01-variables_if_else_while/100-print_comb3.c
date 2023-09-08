#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int e;

	i = 48;

	while (i < 58)
	{
		e = 49;
		while (e < 58)
		{
			if (i != e && i < e)
			{
				putchar(i);
				putchar(e);
				if (i == 56 && e == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			e++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
