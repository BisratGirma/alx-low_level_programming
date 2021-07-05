#include "holberton.h"

/**
 * _memset - fills the first n bytes of memory area with the
 *           constant byte b.
 * @s: a string to be edited.
 * @b: a character to replace a content.
 * @n: the number of characters to be replaced.
 * Return: a editd string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
