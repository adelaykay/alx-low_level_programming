#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: number of arguments
 * @argv: an array of arguments passed
 *
 * Return: 0 for success, 1 for failure
 */

int main(int argc, char **argv)
{
	int change, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	change = atoi(argv[1]);
	coins += change / 25;
	change %= 25;
	coins += change / 10;
	change %= 10;
	coins += change / 5;
	change %= 5;
	coins += change / 2;
	change %= 2;
	coins += change / 1;
	change %= 1;

	printf("%d\n", coins);
	return (0);
}
