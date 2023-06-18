#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints lower case characters
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c = 97;
	char p = c;

	while (c <= 122)
	{
		putchar(p);
		c++;
		p++;
		if (c > 122)
		{
			p = '\n';
			putchar(p);
		}
	}

	return (0);
}
