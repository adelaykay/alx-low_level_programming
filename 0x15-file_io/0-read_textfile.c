#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- reads a text file and
 * prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters to read & print
 * Return: number of letters read and (0) on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename)
	{
		ssize_t fd, str, out;
		char *cont;

		cont = malloc(letters);
		fd = open(filename, O_RDONLY);

		if (fd != -1 && cont != NULL)
		{
			str = read(fd, cont, letters);
			out = write(STDOUT_FILENO, cont, str);
			close(fd);
			return (out);
		}
		free(cont);
		return (0);
	}
	return (0);
}
