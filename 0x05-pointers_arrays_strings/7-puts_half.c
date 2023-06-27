#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * Description: printing second half of string
 * @str: pointer to string character
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len, len2;

	len  = strlen(str);

	if ((len % 2) == 0)
	{
		for (i = (len / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		len2 = (len - 1) / 2;

		for (i = len2; str[i] != '\0'; i++)
		{
			_putchar(str[i + 1]);
		}
		_putchar('\n');
	}
}
