#include "3-calc.h"

/**
 * op_add - Entry point
 *
 * Description: add to integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 *
 * Description: calculates the differenc
 * @a: first parameter
 * @b: second argument
 *
 * Return: differnce of the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- Entry point
 *
 * Description: calcultes the product
 * @a: first argument
 * @b: second argument
 *
 * Return: product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 *
 * Description: divids a by b
 * @a: first argument
 * @b: second argument
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 *
 * Description: calculates modulus of a
 * @a: first argument
 * @b: second argument
 *
 * Return: remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
