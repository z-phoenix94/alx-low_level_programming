#include "main.h"
#include <string.h>

/**
 * rev_string - Entry point
 *
 * Description: reverses a string
 * @s: pointer to character
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp;
	int i, j, len;

	len = strlen(s);
	j = len - 1;

	for (i = 0; i < j; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		j--;
	}
}
