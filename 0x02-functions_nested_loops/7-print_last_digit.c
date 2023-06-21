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
	int c = n % 10;

	if (c >= 0)
	{
		_putchar(c + '0');
	}
	else if (c < 0)
	{
		_putchar(-c + '0');
	}
	else
	{
		_putchar('0' + c);
	}
	return (c);
}
