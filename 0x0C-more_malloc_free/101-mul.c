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
 * main - multiplies two positive numbers and prints the result
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i, j = 0, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
		return (mul);
	}
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
				exit(98);
				return (mul);
			}
		}
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
