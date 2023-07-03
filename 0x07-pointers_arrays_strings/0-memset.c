#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 *
 * Description: fill memory with a constant byte
 * @s: pointer to character
 * @b: constant byte to fill memory area
 * @n: size of memory area to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
