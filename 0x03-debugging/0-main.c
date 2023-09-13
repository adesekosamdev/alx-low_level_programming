#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	if (positive_or_negative(i) > 0)
	{
		printf("%i is positive\n");
	}
	else if (positive_or_negative(i) == 0)
	{
		printf("%i is zero\n");
	}
	else
	{
		printf("%i is negative\n");
	}

	return (0);
}
