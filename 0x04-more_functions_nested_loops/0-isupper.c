#include "main.h"

/**
 * _isupper - checks upper case letter
 *
 * Description: check upercaseness
 * @c: integer to be checked
 *
 * Return: 1 if c is upper, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
