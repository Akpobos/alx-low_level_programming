#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Status
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
