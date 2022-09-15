#include "main.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples of 3 and 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			res += i;
		}
	}
	printf("%d\n", res);
	return (0);
}
