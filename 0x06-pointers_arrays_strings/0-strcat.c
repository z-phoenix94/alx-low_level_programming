#include "main.h"

/**
 * _strcat - Entry point
 *
 * Description: concatenate two strings
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
