#include "main.h"
#include <string.h>

/**
 * _strchr - Entry point
 *
 * Description: locate character in string
 * @s: pointer to character
 * @c: character to be located
 *
 * Return: pointer to the first occurrence of character c in string s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
