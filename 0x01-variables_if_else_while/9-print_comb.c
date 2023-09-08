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
	char k[2] = "9\n";
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	
	for (i = 0; i <= 1; i++)
	{
		putchar(k[i]);
	}
	return (0);
}
