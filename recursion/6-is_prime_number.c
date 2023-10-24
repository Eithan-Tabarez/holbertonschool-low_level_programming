#include "main.h"

/**
 * is_prime - calculate what are prime.
 * @n: number
 * @i: counter or divisor n.
 *
 * Return: 1 if is prime 0.
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == (n - 1) && n % i != 0)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, i + 1));
	}
}

/**
 * is_prime_number - return the sqrt.
 * @n:number
 *
 * Return: 1 if is prime 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
