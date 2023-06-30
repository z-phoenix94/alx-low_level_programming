#include "main.h"
#include <string.h>

/**
 * _strncpy - Entry point
 *
 * Description: copies at most n bytes of string
 * @dest: string to be copy
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
