#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: the dog to be released.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
