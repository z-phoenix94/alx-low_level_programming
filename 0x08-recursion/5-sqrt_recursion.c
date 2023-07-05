#include "main.h"
/**
 * sqrt_new - Entry point
 *
 * Description: helper function
 * @a: number to be checked
 * @b: number to be returned
 *
 * Return: 1 on success
 */

int sqrt_new(int a, int b)
{
	if (a == b * b)
	{
		return (b);
	}
	else if (a < b * b)
	{
		return (-1);
	}
	return (sqrt_new(a, b + 1));
}

/**
 * _sqrt_recursion - Entry point
 *
 * Description: calculates the natural
 * square root of a given number
 * @n: number to be checked
 *
 * Return: natural square root of the number, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (sqrt_new(n, 1));
}
