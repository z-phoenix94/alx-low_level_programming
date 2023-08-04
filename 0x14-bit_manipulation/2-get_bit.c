#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer value
 * @index: index of a binary number
 * Return: value of bit at index, -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}

	bit = (n >> index) & 1;
	return (bit);
}
