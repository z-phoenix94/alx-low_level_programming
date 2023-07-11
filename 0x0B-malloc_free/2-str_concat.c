#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * Description: concatenate two strings
 * @s1: first string
 * @s2: second string to be concatenated with s1
 *
 * Return: pointer to the newly allocated space, or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *catstring = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	catstring = (char *) malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (catstring != NULL)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			catstring[i] = s1[i];
		}
		for (j = 0; j < strlen(s2); j++)
		{
			catstring[(strlen(s1) + j)] = s2[j];
		}
	}
	if (catstring == NULL)
	{
		return (NULL);
	}
	return (catstring);
}
