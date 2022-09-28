#include "main.h"

/**
 * _guess - finds natural square root by guessing recursively
 * @n: integer number whose square root is to be determined
 * @g: integer number to begin guessing from
 *
 * Return: natural square root or -1 if none exists
 */

int _guess(int n, int g)
{
	if (g * g == n)
		return (g);
	else if (g * g > n)
		return (-1);
	else
		return (_guess(n, (g + 1)));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number in question
 *
 * Return: the outcome of calling the guess function
 * with n and 1 as arguments
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_guess(n, 1));
}
