#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Error or result
 */
int main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (1);
}
