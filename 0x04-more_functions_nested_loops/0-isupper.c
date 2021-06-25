#include "holberton.h"

/**
 * _isupper -check if a character is capital
 * @c: a character to be tested
 * Return: 1 if uppercase, and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
