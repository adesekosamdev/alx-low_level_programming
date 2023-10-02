#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: - # of parameters
 * @argv: - array of parameters
 * Return: 0 if success, 1 if fail.
 **/

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
