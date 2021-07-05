#include "holberton.h"
/**
 * leet - change a string to 1337 style
 * @str: a string variable
 *
 * Return: a leet style string
 */
char *leet(char *str)
{
	int i;
	char alpha[26 * 2];

	for (i = 0; i < 26 * 2; i++)
	{
		alpha[i] = 0;

		alpha['a' - 'a'] = alpha['A' - 'A' + 26] = '4';
		alpha['e' - 'a'] = alpha['E' - 'A' + 26] = '3';
		alpha['o' - 'a'] = alpha['O' - 'A' + 26] = '0';
		alpha['t' - 'a'] = alpha['T' - 'A' + 26] = '7';
		alpha['l' - 'a'] = alpha['L' - 'A' + 26] = '1';
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		int l = *(str + i) >= 'a' && *(str + i) <= 'z';
		int u = *(str + i) >= 'A' && *(str + i) <= 'Z';
		int key = *(str + i) - (l * 'a') - (u * ('A' - 26));

		if ((l || u) && alpha[key] != 0)
			*(str + i) = alpha[key];
	}
	return (str);
}
