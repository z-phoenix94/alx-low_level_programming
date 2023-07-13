#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - Entry point
 *
 * Description: creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array, NULL othewise
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) *((max -min) + 1));

	for (i = min; i <= max; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			ptr[i] = min;
			min++;
		}
	}
	return (ptr);
}
