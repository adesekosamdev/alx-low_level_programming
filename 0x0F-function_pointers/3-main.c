#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main entry point of the program
 * @argc: count of command line arguments
 * @argv: vector containing command line arguments
 *
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char sym;
	int (*ptr)(int a, int b);

	sym = argv[2][0];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (sym != '+' && sym != '-' && sym != '*' && sym != '/' && sym != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((sym == '/' || sym == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);

	result = ptr(num1, num2);
	printf("%i\n", result);

	return (0);
}
