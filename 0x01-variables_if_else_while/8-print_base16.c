#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;
	char p = 'a';

	while (a < 10)
	{
		putchar (a + '0');
		a++;
	}

	while (p < 'g')
	{
		putchar(p);
		p++;
	}

	putchar('\n');
	return (0);
}
