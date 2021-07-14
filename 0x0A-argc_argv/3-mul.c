#include <stdio.h>
#include <stdlib.h>
/**
 * main-code begin
 * @argc: the number of arg
 * @argv: array of pointers to arg
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
