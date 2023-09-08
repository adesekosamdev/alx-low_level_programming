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
	char k[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i <= 23; i++)
	{
		putchar(k[i]);
	}
	putchar('\n');
	return (0);
}
