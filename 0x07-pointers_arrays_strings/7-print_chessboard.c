#include "main.h"

/**
 * print_chessboard - prints a two dimensional array in form of a table
 * @a: pointer to an array of 8 rows
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
