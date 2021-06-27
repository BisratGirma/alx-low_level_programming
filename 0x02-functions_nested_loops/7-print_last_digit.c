#include "holberton.h"

/**
 * print_last_digit - checks number
 * @j: a specified integer 
 * Return: returns an integer i 
 */
int print_last_digit(int j)
{
	int i;

	i = j % 10;

	if (i < 0)
	{
		i *= -1;
	}
	_putchar(i + '0');
	return (i);
}
