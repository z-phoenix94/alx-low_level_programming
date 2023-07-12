#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: adds positive numbers
 * @argc: counts command line arguments
 * @argv: holds value of command line arguments
 *
 * Return: 0 on Success, 1 on Error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == atoi(argv[0]))
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
