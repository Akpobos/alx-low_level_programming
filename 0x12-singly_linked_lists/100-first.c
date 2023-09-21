#include <stdio.h>

void print_initial(void) __attribute__ ((constructor));

/**
 * print_initial - Entry point
 * Return: void
 */

void print_initial(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
