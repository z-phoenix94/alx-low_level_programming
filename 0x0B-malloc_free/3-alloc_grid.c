#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - Entry point
 *
 * Description: returns pointer to a two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int *s;
	int **d_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (width > 0 && height > 0)
	{
		d_array = (int **) malloc(width * sizeof(int *));

		if (d_array == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			*(d_array + i) = (int *) malloc(height * sizeof(int));

			if (*(d_array + i) == NULL)
			{
				for (i = 0; i < width; i++)
				{
					s = d_array[i];
					free(s);
				}
				free(d_array);
				return (NULL);
			}
		}
		if (d_array != NULL)
		{
			for (k = 0; k < width; k++)
			{
				for (j = 0; j < height; j++)
				{
					d_array[k][j] = 0;
				}
			}
		}
	}
	return (d_array);
}
