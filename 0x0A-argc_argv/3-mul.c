#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: multiplies two command line arguments
 * @argc: counts command line arguments
 * @argv: holds command line argument names
 *
 * Return: 0 on Success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = (atoi(argv[1]) * atoi(argv[2]));
		}
		printf("%d\n", mul);
	}
	return (0);
}
