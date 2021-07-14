#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, 
 *               and initializes it with a specific char
 * @size: the size of the array
 * @c: a char to intialise the array.
 *
 * Return: a pointer to the array, 
 *         else if size 0 or the function fials NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char)* size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
