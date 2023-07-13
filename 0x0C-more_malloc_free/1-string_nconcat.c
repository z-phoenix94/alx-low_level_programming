#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 *
 * Description: concatenates two strings
 * @s1: first string
 * @s2: string to be concatenated with s2
 * @n: number of bytes from s2 to be concatenated with s2
 *
 * Return: pointer to the newely allocated memory address,
 * NULL otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat_str;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
		cat_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	}
	else
	{
		cat_str = malloc(sizeof(char) * (strlen(s1) + n + 1));
	}
	if (cat_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		cat_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		cat_str[strlen(s1) + j] = s2[j];
	}
	cat_str[strlen(s1) + j] = '\0';
	return (cat_str);
}
