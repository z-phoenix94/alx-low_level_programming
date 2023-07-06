#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Description: print numbers to 98
 * @n: number to be checked
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i >= 10 && i < 98)
			{
				printf("%d%d, ", i / 10, i % 10);
			}
			else if (i == 98)
			{
				printf("%d%d", i / 10, i % 10);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 10 && i < 98)
			{
				printf("%d%d, ", i / 10, i % 10);
			}
			else if (i == 98)
			{
				printf("%d%d", i / 10, i % 10);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	printf("\n");
}
