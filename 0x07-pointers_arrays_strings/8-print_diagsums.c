#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a 2-dimensional array of intgers
 * @size: size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, suma = 0, sumb = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				suma += *(a + (i * size + j));
/*				printf("Array[%d][%d] : %d\n", i, j, *(a + (i * size + j))); */
			}
		}
	}

	for (i = 0; i < size; i++)
	{
		for (j = size; j >= 0; j--)
		{
			if (i + j == size - 1)
			{
				sumb += *(a + (i * size + j));
/*				printf("Array[%d][%d] : %d\n", i, j, *(a + (i * size + j))); */
			}
		}
	}
	printf("%d, %d\n", suma, sumb);
}
