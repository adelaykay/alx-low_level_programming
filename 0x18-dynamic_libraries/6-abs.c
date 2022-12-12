#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @i: integer input
 *
 * Return: absolute value  Always (SUCCESS)
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * (-1));
	}
	_putchar('\n');
}
