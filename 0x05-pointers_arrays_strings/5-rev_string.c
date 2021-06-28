#include "holberton.h"

/**
 * rev_string - change the variable a string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	char ch[i];
	int j;

	for (i = i - 1; s[i] != '\0' ; i--)
	{
		for (j = 0; j <= i; j++)
			ch[j] = s[i];
	}

	for (j = 0; j <= i; j++)
		s[j] = ch[j];

	_putchar('\n');
}
