#include "holberton.h"

/**
 * print_alphabet - displays all lowercases followed by newline
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
