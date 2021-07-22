#include "variadic_functions.h"

/**
 * sum_them_all - return the some of all its parameters.
 * @n: number of parameter.
 *
 * Return: some of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		result += va_arg(args, unsigned int);
	va_end(args);

	return (result);
}
