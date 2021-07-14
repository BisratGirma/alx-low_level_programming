#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - main to print contents of argv
 * @argc: number of commands
 * @argv: command strings entered
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int amount, i, coin, rem;
	int changes[] = {25, 10, 5, 2, 1};
	int total = 0;

	if (argc == 2)
	{
		amount = atoi(argv[1]);

		if (amount <= 0)
		{
			printf("0\n");
		}
		else
		{
			for (i = 0; i < 5; i++)
			{
				if (amount >= changes[i])
				{
					coin = amount / changes[i];
					rem = amount % changes[i];
					amount = rem;
					total += coin;
				}
			}
		}
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
