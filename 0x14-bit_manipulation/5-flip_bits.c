#include "main.h"

/**
 * flip_bits - flips a number
 * @n: number to be flipped
 * @m: number to filp to
 *
 * Return: number of bits to fip a number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current_val;
	unsigned long int bit_xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current_val = bit_xor >> i;
		if (current_val & 1)
		{
			count++;
		}
	}
	return (count);
}
