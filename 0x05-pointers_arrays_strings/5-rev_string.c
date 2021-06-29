#include "holberton.h"

/**
 * rev_string - change the variable a string in reverse
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int i, j;
	char ch;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++, i--)
	{
		ch = s[i - 1];
		s[i - 1] = s[j];
		s[j] = ch;	
	}
}
