#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: swaps value of variables
 * @a: pointer to integer
 * @b: poniter to integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
