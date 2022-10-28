#include "main.h"

/**
 * _pow - returns the value of x raised to the power y
 * @x: integer base
 * @y: integer exponent
 *
 * Return: integer result
 */

int _pow(int x, int y)
{
	int result = 1;

	while (y != 0)
	{
		result *= x;
		--y;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len >= 0)
	{
		len--;
		if (b[len] == '0')
		{
			i++;
			continue;
		}
		else if (b[len] == '1')
		{
			result += _pow(2, i);
			i++;
		}
	}
	return (result);
}
