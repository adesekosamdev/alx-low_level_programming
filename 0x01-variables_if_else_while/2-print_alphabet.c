#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{	
	char k[27] = "abcdefghijklmnopqrstuvwxyz\n";

	for (int i = 0; i <= 28; i++)
	{
		putchar(k[i]);
	}
	return (0);
}
