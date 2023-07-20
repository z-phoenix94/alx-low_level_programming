#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 *
 * Description: print numbers with separator
 * @separator: a string to be printed between numbers
 * @n: number of interges passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			j = va_arg(ap, unsigned int);
			printf("%d", j);

			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
