#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 48;

	while (i < 58)
	{
		j = 49;
		while (j < 58)
		{
			k = 49;
			while (k < 58)
			{
				if (i != j && i < j && j != k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
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
