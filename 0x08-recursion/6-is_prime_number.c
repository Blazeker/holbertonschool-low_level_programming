#include "holberton.h"

/**
 * prime - the prime
 * @n : an int
 * @i : an int
 * Return: an int
 */

int prime(int n, int i)
{
	if (n % i == 0 || n < 2)
	{
		return (0);
	}
	else if (i == n - 1)
	{
		return (1);
	}
	else if (n > i)
	{
		return (prime(n, i + 1));
	}
	return (1);
}

/**
 * is_prime_number - If is prime
 * @n : int
 * Return: An int
 */

int is_prime_number(int n)
{
	int i = 2;

	return (prime(n, i));
}
