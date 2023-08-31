#include "main.h"

/**
 * check_prime - prime recursion
 * @n: The number
 * @c: the var
 * Return: number
 */
int check_prime(int n, int c)
{
	if (c < 2)
		return (1);
	if (n % c == 0)
		return (0);
	return (check_prime(n, (c - 1)));
}

/**
 * is_prime_number - check if a number is prime
 * @n: The number
 * Return: 1 if tru else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, (n / 2)));
}
