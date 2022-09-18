#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 Always
 */

void more_numbers(void)
{
	int i, j;

	for (i = 48; i < 50; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i > 48)
			{
				_putchar(i);
			}
			_putchar(j);
			if (i > 48 && j == 53)
			{
				break;
			}
		}
	}
	_putchar('\n');
}
