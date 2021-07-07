#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: a string to be reverse printed.
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		i++;
	printer(s, i);
}

void printer(char *s, int i)
{
	if (i < 0)
		return;

	_putchar(*(s + i));
	i++;
	printer(s + i);
}

