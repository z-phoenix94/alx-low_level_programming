#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_all - Entry point
 *
 * Description: prints anything
 * @format: list of types of argument
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list any_t;

	va_start(any_t, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(any_t, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(any_t, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(any_t, double));
					break;
				case 's':
					str = va_arg(any_t, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(any_t);
}

