#include "holberton.h"

int st(int n, int nroot);
/**
 * _sqrt_recursion - finds the natural square root of a @n
 * @n: the integer number
 *
 * Return: a square root of @n,
 *         if @n doesnt have root return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (st(n, n / 2));
}

/**
 * st - finds root of n.
 * @n: the integer number
 * @nroot: the root of @n
 * Return: the root @n.
 */
int st(int n, int nroot)
{
	if ((nroot * nroot) == n)
		return (nroot);
	if (nroot < 0)
		return (-1);

	return (st(n, nroot - 1));
}
