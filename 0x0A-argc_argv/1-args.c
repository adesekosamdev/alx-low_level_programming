#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: - # of parameters
 * @argv: - array of parameters
 * Return: 0 if success, 1 if fail.
 **/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 1)
	{
		printf("%i\n", argc - 1);
		return (0);
	}
	return (1);
}
