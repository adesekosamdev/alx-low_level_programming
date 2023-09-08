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
	char k[11] = "0123456789\n";
	int i;

	for (i = 0; i <= 10; i++)
	{
		putchar(k[i]);
	}
	return (0);
}
