#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}

/**
 * print_list - print all members of the lsit
 * @h: poionts to node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	int i;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			char *s = "[0] (nil)";

			for (i = 0; s[i] != '\0'; i++)
			{
				_putchar(s[i]);
			}
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			print_number(h->len);
			_putchar(']');
			_putchar(' ');

			for (i = 0; h->str[i] != '\0'; i++)
			{
				_putchar(h->str[i]);
			}
			_putchar('\n');
		}
		h = h->next;
	}
	return (count);
}
