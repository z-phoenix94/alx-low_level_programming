#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints lowercase letters 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j;
	char c = 'a';

	while (j < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		j++;
	}
	_putchar('\n');
}
