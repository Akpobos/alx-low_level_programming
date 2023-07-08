#include "main.h"

/**
 * main - Prints minimum number of coin
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Number
 */
int main(int argc, char **argv)
{
	int cent;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("%d\n", 0);
		exit(EXIT_SUCCESS);
	}
	coins = 0;
	while (cent)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else
			cent -= 1;

		coins++;
	}

	printf("%d\n", coins);
	exit(EXIT_SUCCESS);
}
