#include "holberton.h"

/**
 * wildcmp - check if two strings are identical
 * @S1 - first string
 * @s2 - second string
 *
 * Return - 1 if identical, and 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{	if (*s1 == '\0' && *s2 == '\0')
				return (1);
			else
				return (0);
		}
		return (wildcmp(++s1, ++s2));
	}
	else if (*s2 == '*')
	{	
		if (*s1 == *(s2 + 1))
			return (wildcmp(++s1, s2 + 2));
		return (wildcmp(++s1, s2));
	}
	else
		return (0);
}
