#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print all the numbers passed
 * @separator: character that separates the numbers
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%i", x);
		if (separator != NULL &&  i != (n - 1))
		{
			printf("%s", separator);
		}
		if (i == (n - 1))
			printf("\n");
	}
	va_end(args);
}
