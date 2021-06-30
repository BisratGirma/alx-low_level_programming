#include "holberton.h"
/**
 * _strncat - merges two integers with n bytes from src
 * @dest: first string
 * @str: second string
 *
 * Return: a merged string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i;

	while (dest[destlen] != '\0')
		destlen++;

	for (i = 0; i < n; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
