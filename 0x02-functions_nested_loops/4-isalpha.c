#include "holberton.h"

/**
 * _isalpha - checks if a specified character is alphabet 
 * @c: is the value of a character to be checked
 * Return: 1 if a character is alphabet, and 0 if it's not.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
