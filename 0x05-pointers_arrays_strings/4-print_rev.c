#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Entry point
 *
 * Description: prints a reverse string
 * @s: character pointer
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int j = strlen(s);
	int i;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
