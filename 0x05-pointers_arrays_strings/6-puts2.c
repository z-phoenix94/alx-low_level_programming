#include "main.h"
#include <string.h>

/**
 * puts2 - Entry point
 *
 * Description: printing every other characters of a string
 * @str: pointer to character
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
