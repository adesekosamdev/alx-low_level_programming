#include "main.h"

/**
  *_print_rev_recursion -  prints a string in reverse.
  * @s: input char
  *
  *
  **/

void _print_rev_recursion(char *s)
{
	char *temp;

	if (*s == '\0')
	{
		return;
	}
	temp = s;
	s++;
	_print_rev_recursion(s);
	_putchar(*temp);
}
