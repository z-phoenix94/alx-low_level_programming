#include "main.h"

/**
 * _strcmp - Entry point
 *
 * Description: compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: positive number if s1 is greater, 0 if equal
 * -negative otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{
		s1[i]++;
		s2[i]++;
	}

	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
