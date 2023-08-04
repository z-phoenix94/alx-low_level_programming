#include "main.h"

/**
 * clear_bit - sets value of bit 0 to a given index
 * @n: pointer to unsigned long int number
 * @index: index of a binary
 *
 * Return: 1 if successs, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
