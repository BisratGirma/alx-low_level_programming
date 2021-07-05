#include "holberton.h"

/**
 * _memcpy - copies @n bytes of memory area from @src to @dest
 * @dest: an array to the result of @src.
 * @src: a variable to be copied to @dest.
 * @n: number of values to be changed.
 * Return: edited @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
