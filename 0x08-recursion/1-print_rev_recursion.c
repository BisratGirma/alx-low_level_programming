#include "holberton.h"

void printer(char *s, int i);

/**
 * _print_rev_recursion - print a string in reverse
 * @s: a string to be reverse printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}

