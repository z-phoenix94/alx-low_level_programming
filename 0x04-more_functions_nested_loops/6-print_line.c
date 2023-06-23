#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: prints straight line to the terminal
 * @n: the number of times character _ is printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
