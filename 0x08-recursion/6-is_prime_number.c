#include "holberton.h"

int primen(int, int i);
/**
 * is_prime_number - checks if a given number is prime or not.
 * @n: a given integer number.
 *
 * Return: 1 if a @n is prime number and 0 if @n is not.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (primen(n, i));
}

/**
 * pr - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */
int primen(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i == n / 2)
		return (1);

	return (primen(n, i + 1));
}
