#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: NULL if ac == 0 or av == NULL or on failure
 * OR a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *str, *iter;

	if (!ac || !av)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{
		iter = av[i];
		while (*iter)
		{
			iter++;
			j++;
		}
		i++;
		j++;
	}

	str = (char *) malloc(j * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ac)
	{
		iter = av[i];
		while (*iter)
		{
			str[j] = *iter;
			iter++;
			j++;
		}
		str[j] = '\n';
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
