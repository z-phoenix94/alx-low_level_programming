#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: returns factorial of a given number
 * @n: number factorial to be calculated
 *
 * Return: factorial of the number, -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
