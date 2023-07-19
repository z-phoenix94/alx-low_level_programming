#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 *
 * Description: frees the allocated memory
 * @d: dynamically allocated memory
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
