#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;

i = 48;
while (i < 58)
{
	j = 48;
	while (j < 58)
	{
		k = 48;
		while (k < 58)
		{
			l = 48;
			while (l < 58)
			{
				if (((i * 10) + j) < ((k * 10) + l))
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				l++;
			}
			k++;
		}
		j++;
	}
	i++;
}
putchar('\n');
return (0);
}
