#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: calculates the length of string
 * @s: charcter pointer
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = n + 1;
	}
	return (n);
}
