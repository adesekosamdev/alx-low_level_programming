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
	char k[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar(k[i]);
	}
	putchar('\n');
	return (0);
}
