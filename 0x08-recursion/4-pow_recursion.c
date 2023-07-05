#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: returns x raised to y
 * @x: base number
 * @y: exponent
 *
 * Return: x raised to y, -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
