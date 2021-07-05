#include "holberton.h"

/**
 * _strchr - searches for a character in string.
 * @s: a string to be searched on.
 * @c: a character to be searched.
 *
 * Return: a pointer to the first occurrence of the @c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (c != '\0')
	{
		if (c == *(s + i))
			return ((s + i));
		i++;
	}
	return ('\0');
}
