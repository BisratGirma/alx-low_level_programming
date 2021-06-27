#include "holberton.h"

/**
 * _islower - checks if a specified character is lowercase
 * @c: is the value of a character to be checked
 * Return: 1 if a character is lowercase, and 0 if it's not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
