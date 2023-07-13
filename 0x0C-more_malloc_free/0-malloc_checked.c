#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - Entry point
 *
 * Description: allocates memory using malloc
 * @b: size of memory be allocated
 *
 * Return: pointer to the allocated memory
 * normal status termination with value 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);



}

