#include "holberton.h"

/**
 * print_sign - checks if an a value is positive or negative.
 * @n: a value to checked
 * Return: 1 if positive, 0 if zero, -1 if negarive, / if not digit.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
