#include "main.h"
#include <stdio.h>

int main(void)
{
	int i;
	int n = 0;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			n = (n + 1);
		}
		else
		{
			;
		}
	}
	printf("%i\n", n);
}
