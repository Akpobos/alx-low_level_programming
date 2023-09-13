#include "3-calc.h"

/**
 * main - Perform simple operation
 * @ac: Argument count
 * @av: Argument Vector
 * Return: Number
 */
int main(int ac, char **av)
{
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(av[2]);
	if (strlen(argv[2]) != 1 || !f)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*av[2] == '/' || *av[2] == '%') && (atoi(av[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(atoi(av[1]), atoi(av[3])));
	exit(EXIT_SUCCESS);
}
