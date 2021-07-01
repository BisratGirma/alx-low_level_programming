#include "holberton.h"

/**
 * cap_string - capitalizes a given string.
 * @s: a string variable
 *
 * Return: a capitalized string.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
		}
	}
	return (s);
}
