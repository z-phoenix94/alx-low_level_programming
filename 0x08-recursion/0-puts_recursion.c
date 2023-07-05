#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: writes string s and a trailing white space
 * @s: string to be printed on screen
 *
 * Return: nonnegative number on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
