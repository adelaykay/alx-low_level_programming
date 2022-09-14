#include "main.h"

/**
 * times_table  - generates a 9x multiplication table
 *
 * Return: no return   Always (SUCCESS)
 */

void times_table(void)
{
	int num1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j;
	int res;
	int first;
	int last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = num1[i] * num2[j];
			first = res / 10;
			last = res % 10;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (res < 10)
			{
				_putchar('0' + res);
			}
			else
			{
			_putchar('0' + first);
			_putchar('0' + last);
			}
		}
		_putchar('\n');
	}
}
