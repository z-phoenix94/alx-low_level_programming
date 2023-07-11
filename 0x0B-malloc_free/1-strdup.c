#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 * Description: returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string str
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicate string, NULL otherwise.
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *dupstring;

	if (str == 0)
	{
		return (NULL);
	}
	if (str != 0)
	{
		dupstring = (char *) malloc(sizeof(char) * strlen(str));

		if (dupstring != NULL)
		{
			for (i = 0; i < strlen(str); i++)
			{
				dupstring[i] = str[i];
			}
		}
	}
	return (dupstring);
}
