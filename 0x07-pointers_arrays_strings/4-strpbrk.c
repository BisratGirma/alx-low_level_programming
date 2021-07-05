#include "holberton.h"

/**
 * _strpbrk - Searches a string for a set of characters. 
 * @s: The string to be searched.
 * @accept: The set of characters to be searched for.
 *
 * Return: the found set of characters memory area, else NUll 
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return (NULL);
}
