#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point
 *
 * Description: prints string
 * @separator: string separator
 * @n: number of strings passed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
