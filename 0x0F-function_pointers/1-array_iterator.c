#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Entry point
 *
 * Description: execute a function given as
 * parameter on each element of array
 * @array: array variable
 * @size: size the of the array
 * @action: pointer to function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
