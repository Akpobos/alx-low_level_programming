#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints name of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Exit
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
