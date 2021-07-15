#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer variable.
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
