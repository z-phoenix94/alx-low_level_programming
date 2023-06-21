#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: checks lowercase charatcters
 * @c: vlaue to be checked
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
