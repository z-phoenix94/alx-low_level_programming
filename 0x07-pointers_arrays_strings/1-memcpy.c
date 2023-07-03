#include "main.h"
#include <string.h>

/**
 * _memcpy - Entry point
 *
 * Description: copy memory area
 * @dest: destination area
 * @src: source area to copy
 * @n: number of bytes to copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= (n - 1); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
