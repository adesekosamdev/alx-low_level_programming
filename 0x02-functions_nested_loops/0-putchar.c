#include "main.h"

/**
 * main - Prints _putchar
 * @void: Empty parameter list for main.
 *
 * Description: Prints _putchar w/out stdio
 *
 * Return: 0 for success
*/

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
