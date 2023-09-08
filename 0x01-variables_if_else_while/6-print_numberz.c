#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
