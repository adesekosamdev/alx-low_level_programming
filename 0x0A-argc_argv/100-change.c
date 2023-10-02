#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: 0 for success, 1 for fail
 **/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int amount;
		int min;
		int i;
		int values[5] = {25, 10, 5, 2, 1};

		amount = atoi(argv[1]);
		min = 0;

		if (amount < 0)
		{
			printf("0\n");
			return (1);
		}
		else
		{
			while (amount > 0)
			{
				for (i = 0; i < 5; i++)
				{
					if (amount >= values[i])
						break;
				}
				min = min + (amount / values[i]);
				amount = amount % values[i];
			}
			printf("%i\n", min);
			return (0);
		}
	}
}
