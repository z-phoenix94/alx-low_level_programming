#include "main.h"
#include "string.h"

/**
 * *_strcpy - Entry point
 *
 * Description: copies string pointed by src to buffer dest
 * @dest: buffer to copy src's value
 * @src: string pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
