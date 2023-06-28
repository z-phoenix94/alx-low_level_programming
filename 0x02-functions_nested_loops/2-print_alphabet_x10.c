#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints lowercase letters 10x
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int j;
	char  c;

	for (j = 0; j < 10; j++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
