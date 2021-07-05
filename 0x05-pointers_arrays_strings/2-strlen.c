#include "holberton.h"

/**
 * _strlen - calculate the number of character @s has
 * @s: a string variable.
 *
 * Return: Length of the variable @s string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
