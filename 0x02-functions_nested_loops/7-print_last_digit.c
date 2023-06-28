#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints last digit of an integer
 * @n: integer to be scanned
 *
 * Return: vlaue of last digit
 */

int print_last_digit(int n)
{

	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar(((-1) * (n % 10)) + '0');
		return (((-1) * (n % 10)));
	}
}
