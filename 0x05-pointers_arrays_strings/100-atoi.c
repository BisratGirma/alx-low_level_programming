#include "holberton.h"

/**
 * atoi - converts a string to integer
 * @s: a string variable
 *
 * return: a converted integer
 */

int _atoi(char *s)
{
	int r = 0;

	int sign = 1;

	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; ++i)
		r = r * 10 + s[i] - '0';

	return sign * r;
}
