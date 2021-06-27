#include "holberton.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets 10 times
 * after a one time full alphabet display a new line occur
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i = 97;

		while (i < 123)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
