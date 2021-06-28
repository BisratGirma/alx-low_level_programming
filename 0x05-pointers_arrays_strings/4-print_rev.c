#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (i = i - 1; s[i] != '\0' ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
