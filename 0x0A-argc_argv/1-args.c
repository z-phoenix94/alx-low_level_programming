#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints number of arguments
 * @argc: argument counter
 * @argv: argument vector, holds passed arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	int i, total = 0;

	for (i = 1; i < argc; i++)
	{
		total++;
	}
	printf("%d\n", total);
	return (0);
}
