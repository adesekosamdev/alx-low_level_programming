#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints two strings
 * @separator: character that separates the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *x;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL &&  i != (n - 1))
		{
			printf("%s", separator);
		}
		if (i == (n - 1))
			printf("\n");
	}
	va_end(args);
}
