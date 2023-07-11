#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Entry point
 *
 * Description: creates an array of chars and
 * initializes it with specific char
 * @size: size of array
 * @c: character to be initialized
 *
 * Return: pointer to array, or NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	char *c_array;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		c_array = (char *) malloc(sizeof(char) * size);

		if (c_array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				c_array[i] = c;
			}
		}
	}
	return (c_array);
}
