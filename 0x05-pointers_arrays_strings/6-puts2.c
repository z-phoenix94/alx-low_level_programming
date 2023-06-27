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
	int i, j, len;
	char temp;

	len = strlen(str);
	j = len - 1;

	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
		{
			temp = str[i * 2];
		}
		else
		{
			temp = str[i * 2];
		}
		_putchar(temp);
		j--;
	}
	_putchar('\n');
}
