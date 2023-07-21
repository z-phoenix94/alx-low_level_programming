#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && *argv[3] == '0')
	{
		printf ("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	result = func(num1, num2);

	printf("%d\n", result);
	return (0);
}
