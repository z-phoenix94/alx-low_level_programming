#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point
 *
 * Description: allocates memory for an array of
 * nmemb elements of size bytes each
 * @nmemb: describe the parameter
 *
 * Return: pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	for (i = 0; i < (nmemb * size); i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr[i] = 0;
		}
	}
	return (ptr);
}
