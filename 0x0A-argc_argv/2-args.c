#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the name of arguments passed
 * @argc: counts argument passed
 * @argv: holds arguments passed to the command line
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
