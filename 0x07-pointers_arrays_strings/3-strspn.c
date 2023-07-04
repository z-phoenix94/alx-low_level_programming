#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - Entry point
 *
 * Description: 'the program's description'
 * @s: pointer to character
 * @accept: characters to be checked
 *
 * Return: Number of bytes in intial segments of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	unsigned int len1, len2, i, j;

	len1 = strlen(s);
	len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		bool match = false;

		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				match = true;
				break;
			}
		}
		if (!(match))
		{
			break;
		}
		else
		{
			counter++;
		}
	}
	return (counter);
}
