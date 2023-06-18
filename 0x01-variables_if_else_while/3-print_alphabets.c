#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printes lower case followed by upper case
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;
	int N = 65;
	char p = n;
	char P = N;

	while (n <= 122)
	{
		while (N <= 90)
		{
			putchar(p);
			N++;
			p++;
		}
		putchar(P);
			n++;
		P++;

		if (n > 122)
		{
			P = '\n';
			putchar(P);
		}
	}
	return (0);
}
