#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random 12 character password
 *
 * return: generated password.
 */
int main(void)
{
	srand((unsigned int)(time(NULL)));

	int i;

	char p[10];

	for (i = 0; i < 10; i++)
	{
		char pchar = '0' + (rand() % 9);
		p[i] = pchar;
	}

	printf("%s" , p);
}
