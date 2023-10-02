#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc:  # of parameters
 * @argv:  array of parameters
 * Return: 0 if success, 1 or 2 if fail.
 **/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int term;
	int sum;

	term = 0;
	sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (2);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < 48 || argv[i][j] > 57)
				{
					term = 1;
					break;
				}
			}
			if (term == 1)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%i\n", sum);
		return (0);
	}
}
