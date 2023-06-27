#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: prints n elements of array of integers
 * @a: pointer to an integer
 * @n: size of an array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
