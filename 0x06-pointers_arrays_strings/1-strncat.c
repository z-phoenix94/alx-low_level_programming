#include "main.h"
#include <string.h>

/**
 * _strncat - Entry point
 *
 * Description: concatenates at most n number of bytes only
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: maximum number of charatcters to be appended
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, len;

	len = strlen(src);

	while (dest[i] != 0)
	{
		i++;
	}
	if (n < len)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		j = 0;

		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
