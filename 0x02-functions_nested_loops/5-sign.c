#include "main.h"

/**
 * print_sign - checks if the input number lt, gt or eq zero.
 * @n: character to check
 *
 * Return: 1 for alphaber. 0 for the rest  Always (SUCCESS)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
