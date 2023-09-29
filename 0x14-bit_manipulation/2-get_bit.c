#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: The num
 * @index: The index
 * Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(n) * 8) - 1))
		return (-1);
	return ((n >> index) & 1);
}
