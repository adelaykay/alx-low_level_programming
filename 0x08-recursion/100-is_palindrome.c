#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length))
		length++;
	return (length);
}

/**
 * check_pal - checks recursively for a palindrome
 * @s: string in question
 * @strlen: length of string in question
 * @iter: used to iterate through the string
 * Return: 1 if palindrome or 0 if not
 */

int check_pal(char *s, int strlen, int iter)
{
	if (iter < 1)
		return (1);
	else if (*(s) != *(s + iter))
		return (0);
	else
		return (check_pal((s + 1), strlen, (iter - 2)));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string in question
 *
 * Return: the result of a recursive check for palindrome
 */

int is_palindrome(char *s)
{
	int strlen = _strlen(s);
	int iter = strlen - 1;

	if (strlen <= 1)
		return (1);
	else
		return (check_pal(s, strlen, iter));
}
