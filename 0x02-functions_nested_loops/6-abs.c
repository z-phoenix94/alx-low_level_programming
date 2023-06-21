#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes absolute value of an integer
 * @n: integer to be checked
 * Return: Absolute value of the given integer (Success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
