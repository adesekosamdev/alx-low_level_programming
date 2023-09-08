#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char k[11] = "0123456789\n";

	for (int i = 0; i <= 10; i++)
	{
		putchar(k[i]);
	}
	return (0);
}
