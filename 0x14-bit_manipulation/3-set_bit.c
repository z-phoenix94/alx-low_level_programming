#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given inded
 * @n: pointer to unsigned long int
 * @index: index
 *
 * Return: 1 if success, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
