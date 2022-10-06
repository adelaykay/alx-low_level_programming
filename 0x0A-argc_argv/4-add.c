#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks for a digit
 * @c: integer to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - adds positive numbers and prints the result
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, j = 0, sum = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (_isdigit(argv[i][j]))
			{
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
