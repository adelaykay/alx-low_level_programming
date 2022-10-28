#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer number given
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, swtch = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		int mask = (1 << i);

		if (swtch == 0 && (n & mask))
		{
			swtch = 1;
			_putchar('1');
		}
		else if (swtch == 1)
		{
			if (n & mask)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
