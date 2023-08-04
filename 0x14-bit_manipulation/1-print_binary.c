#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be changed to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int current_val;

	for (j = 63; j >= 0; j--)
	{
		current_val = n >> j;

		if (current_val & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
		_putchar('0');
}
