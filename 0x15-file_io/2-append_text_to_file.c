#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the filename.
 * @text_content: a string to be added on end of file.
 *
 * Return: 1 0n success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t r;
	int i = 0, fd = open(filename, O_WRONLY || O_APPEND);

	if (fd == -1 || *filename == NULL)
	       return (-1);

	while (*text_content)
	{
		i++;
		text_content++;
	}

	r = write(fd, text_content, i);
	close(fd);
	if (r == -1)
		return (-1);
	else
		return (1);
}
