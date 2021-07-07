#include "holberton.h"

/**
 * _strlen_recursion - counts the length of a string.
 * @s: a string to be counted.
 * Return: the length of @s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
