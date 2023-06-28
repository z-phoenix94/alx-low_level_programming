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
	int i, len;

	len = strlen(src);

	for (i = 0; i <= (len - 1); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
