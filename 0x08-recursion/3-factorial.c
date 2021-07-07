#include "holberton.h"

/**
 * factorial - calculate a factorial of a given number.
 * @n: a given number.
 * Return: the factorial number of @n,
 *         if @n is lower than 0 return - 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
