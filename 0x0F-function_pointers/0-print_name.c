#include "function_pointers.h"

/**
 * print_name - Entry point
 *
 * Description: prints a name
 * @name: pointer to name char
 * @f: call back function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
