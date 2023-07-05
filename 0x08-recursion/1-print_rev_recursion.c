#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Entry point
 *
 * Description: prints strings in reverse
 * @s: string to be reversed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
