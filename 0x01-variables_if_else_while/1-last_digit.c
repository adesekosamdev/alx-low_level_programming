#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
    int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
    /* get the last digit of n*/
    k = n % 10;

    if (k > 5)
    {
        printf("The last digit of %d is %d and is greater than 5\n", n,k);
    }
    else if (k == 0)
    {
        printf("The last digit of %d is %d and is 0\n", n,k);
    }
    else
    {
        printf("The last digit of %d is %d and is less than 6 and not 0\n", n,k);
    }

	return (0);
}
