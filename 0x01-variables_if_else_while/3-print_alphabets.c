#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{	
	char k[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	
	for (int i = 0; i <= 53; i++)
	{
		putchar(k[i]);
	}
	return (0);
}
