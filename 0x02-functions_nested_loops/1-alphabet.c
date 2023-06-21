#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints lowercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
