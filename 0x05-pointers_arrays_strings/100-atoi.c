#include "holberton.h"

/**
 * _atoi - converts a string to integer
 * @s: a string variable
 *
 * return: a converted string to integer.
 */
int _atoi(char *s)
{
	int r = 0;

	int sign = -1;

	int i = 0;

	for (; s[i] != '\0'; i++)
	{

		if (s[i] == '-')
		{
			sign *= -1;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			if (r < 0)
				r = (r * 10) - (s[i] - '0');
			else
				r = (s[i] - '0') * -1;

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (sign < 0)
		r *= -1;
	return (r);
}
