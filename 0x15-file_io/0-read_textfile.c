#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to POSIX output.
 * @filename: text file.
 * @letters: the number of letter it should read.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	size_t bytes = 0;
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (-1);
	}
	while ((read(fd, &c, sizeof(c))) > 0)
	{
		if (bytes > letters)
			break;
		printf("%c", c);
		bytes++;
	}
	close(fd);
	return (bytes);
}
