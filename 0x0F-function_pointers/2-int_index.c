#include "function_pointers.h"

/**
 * int_index - Entry point
 *
 * Description: searchs for an integer
 * @array: array variable
 * @size: number of elements of the array
 * @cmp: pointer to function to compare values
 *
 * Return: index of the first element,
 * for which cmp function doesn't return 0
 * -1 if no element matches and size,
 * is less than or eual to zero.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

