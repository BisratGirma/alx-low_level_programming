#include "holberton.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: a pointer to a pointer.
 * @to: a pointer to a  character.
 */
void set_string(char **s, char *to)
{
	int i, k;

	for (i = 0; to[i] != '\0'; i++)
	{
		*(s + i) = (to + i);
	}

	for (k = 0; k < 2; k++)
		*(s + i + k) = (to + 3);
	
}
