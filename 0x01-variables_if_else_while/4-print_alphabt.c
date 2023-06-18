#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabets except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;
	char p = n;

	while (n <= 122)
	{

		if ((n != 101) && (n != 113))
		{
			putchar(p);
		}
		n++;
		p++;

		if (n > 122)
		{
			p = '\n';
			putchar(p);
		}
	}
	return (0);
}
