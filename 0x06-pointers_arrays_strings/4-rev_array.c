#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: reversing an array
 * @a: array to be reversed
 * @n: elements of an array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i <= n)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}
}
