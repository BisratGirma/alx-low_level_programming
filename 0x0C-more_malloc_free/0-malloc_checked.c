#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer variable.
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
	{
		printf("98");
		exit(3);
	}
	return (mem);
}
