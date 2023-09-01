#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print number of args passed
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Number
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", (argc - 1));
	exit(EXIT_SUCCESS);
}
