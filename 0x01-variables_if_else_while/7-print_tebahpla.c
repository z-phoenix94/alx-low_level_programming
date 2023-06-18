#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 122;
	char p = a;

	while ((a >= 97) && (a <= 122))
	{
		putchar(p);
		a--;
		p--;
	}
	if (a < 97)
	{
		putchar('\n');
	}
	return (0);
}
