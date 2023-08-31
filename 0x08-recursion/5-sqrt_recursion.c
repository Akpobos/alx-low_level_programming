#include "main.h"

/**
 * fnd_sqrt - Find the root
 * @n: The number
 * @c: Variable
 * Return: number
 */
int fnd_sqrt(int n, int c)
{
	if (c <= 0 || (c * c) < n)
		return (-1);
	if ((c * c) == n)
		return (c);
	return (fnd_sqrt(n, (c - 1)));
}

/**
 * _sqrt_recursion - Return square root of a number
 * @n: The number
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (fnd_sqrt(n, (n / 2)));
}
