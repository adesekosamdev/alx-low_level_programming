#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{	
	char k[6] = "abcdef";
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 0; i <= 5; i++)
	{
		putchar(k[i]);
	}
	putchar('\n');
	return (0);
}
