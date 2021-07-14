#include <stdio.h>

/**
 * main - prints every execution argument passed
 * @argc: the number of arg
 * @argv: array of pointers to arg
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
