#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 if success, or 1 if fail
 **/

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%i\n", num1 * num2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
