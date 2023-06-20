#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints every combination of a single-integer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');

		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');
	return (0);
}
