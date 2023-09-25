#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: board to be printed
 * Return: nothing
 **/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int numRows;
	int numCols;

	numRows = sizeof(*a) / sizeof(*a[0]);
	numCols = sizeof(a[0]) / sizeof(a[0][0]);

	for (i = 0; i < numRows; i++)
	{
		for (j = 0; j < numCols; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
