#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: the number
 * @m: the other number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;

	while (m || n)
	{
		if ((m & 1) != (n & 1))
			c++;
		m >>= 1;
		n >>= 1;
	}
	return (c);
}
