#include "main.h"
/**
 * prime_one - Entry point
 *
 * description: checks some condition
 * @k: number to be checked
 * @l: number to be cheked
 *
 * Return: 1 on success
 */
int prime_one(int k, int l)
{
	if (k == l)
	{
		return (1);
	}
	else if (k % l == 0)
	{
		return (0);
	}
	return (prime_one(k, l + 1));
}

/**
 * is_prime_number - Entry point
 *
 * Description: checks for primeness of a number
 * @n: number to be evaluated
 *
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_one(n, 2));
}
