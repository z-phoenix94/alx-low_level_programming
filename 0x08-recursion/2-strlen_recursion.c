#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * Description: returns length of astring
 * @s: string to be evaluated
 *
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
