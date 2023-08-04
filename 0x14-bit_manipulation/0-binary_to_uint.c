#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, 0 if b is NULL or b is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k = 1, len;
	int c;

	len = strlen(b);
	if (b == NULL)
	{
		return (0);
	}

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
		{
			return (0);
		}
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
