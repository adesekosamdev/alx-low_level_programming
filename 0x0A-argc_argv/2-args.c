#include <stdio.h>

/**
* main - prints all arguments passed into it
* @argc: - # of parameters
* @argv: - array of parameters
* Return: 0 if success, 1 if fail
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
	}
	return (1);
}
