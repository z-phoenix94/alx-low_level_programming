#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * Description: prints a string to stdout
 * @str: pointer to character
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
