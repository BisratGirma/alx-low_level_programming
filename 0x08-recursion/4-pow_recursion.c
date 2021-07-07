#include "holberton.h"

/**
 * _pow_recursion - calculate the value of @x raised to @y
 * @x: integer variable
 * @y: integer.
 * Return: the result of a raised to the power of y,
 *         if y is lower than 0, returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
