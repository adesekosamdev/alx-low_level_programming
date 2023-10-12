#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints all the arguments that are passed to it in any format
 * @format: format of the argument
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *x;
	unsigned int i, res;

	i = 0;
	res = 0;
	va_start(args, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{ case 'c':
			switch (res)
			{ case 1: printf(", ");	}
			res = 1;
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			switch (res)
			{ case 1: printf(", "); }
			res = 1;
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			switch (res)
			{ case 1: printf(", "); }
			res = 1;
			printf("%f", va_arg(args, double));
			break;
		case's':
			switch (res)
			{ case 1: printf(", "); }
			res = 1;
			x = va_arg(args, char*);
			if (x)
			{ printf("%s", x);
			break; }
			printf("%p", x);
			break; }
		i++;
	}
	printf ("\n");
	va_end(args);
}
