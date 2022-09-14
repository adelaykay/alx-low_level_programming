#include "main.h"

/**
 * _islower - checks if input is a lowercase alphabet
 * @c: charater to check
 *
 * Return: 1 if lowercase alphabet. 0 if not  Always (SUCCESS)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
