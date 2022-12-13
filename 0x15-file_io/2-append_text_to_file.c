#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - that appends text at the end of a file
* @filename: variable pointer
* @text_content: content file
* Return: (1) on success, (-1) on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
int len = 0, fd;

if (filename == NULL)
	return (-1);
if (text_content == NULL)
	text_content = "";
while (text_content[len] != '\0')
{
	len++;
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
	return (-1);
write(fd, text_content, len);
return (1);
}
