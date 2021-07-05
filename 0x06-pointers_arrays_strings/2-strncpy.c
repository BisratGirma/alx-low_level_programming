#include "holberton.h"

/**
 * _strncpy - copies the content of a string to other.
 * @src: the first integer to be copied
 * @dest: the second integer that copies the value of @dest
 * @n: number of characters to be copied.
 * Return: a copied value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
