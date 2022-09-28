#include "main.h"

/**
 * _check - recursively checks if a number is prime
 * @n: dividend
 * @i: divisor
 *
 * Return: 1 if prime or 0 if not
 */

int _check(int n, int i)
{
	if ((n > i) && (n % i != 0))
		return (_check(n, (i + 1)));
	else if ((n > i) && (n % i == 0))
		return (0);
	else
		return (1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: integer number to be checked
 *
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_check(n, 2));
}
