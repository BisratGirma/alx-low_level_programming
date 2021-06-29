#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random 12 character password
 *
 * return: generated password.
 */
const char * main()
{
	srand((unsigned int)(time(NULL)));

	int i;
	char p[12];

	for (i = 0; i < 12; i++)
	{
		char pchar = ' ' + (rand() % 94);
		p[i] = pchar;
	}

	printf("%s" , p);
}
