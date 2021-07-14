#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of execution arguments passed
 * @argv: void.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc);

	return (0);
}
