#include "holberton.h"

/**
 * _isdigit - ckecks if a character is digit
 * @c : is the character to be checked
 * Return: 1 if it's digit , and 0 if it's not.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
