#include "holberton.h"

/**
 * _puts - displays ever character in string.
 * @str: a character to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(*(str + i));

	_putchar('\n');
}
