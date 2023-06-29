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
	int i, len;

	len = strlen(src);

	if (n < len)
	{
		for (i = 0; i < n; i++)
		{
			if (src[i] != '\0')
			{
				dest[i] = src[i];
			}
			else
			{
				dest[i] = '\0';
			}
		}
	}
	else
	{
		i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
