#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create.
 * @text_content: a string to be written on the file.
 *
 * Return: 1 on succuss, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0, fd = open(filename, O_CREAT | O_RDWR);

	if (fd == -1)
	{
		return (-1);
	}

	while (*text_content)
	{
		i++;
		text_content++;
	}
	write(fd, text_content, i);
	close(fd);
	return (1);
}
