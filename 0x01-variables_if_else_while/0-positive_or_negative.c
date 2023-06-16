#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Check if a number is positive, negative or zero
 * return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is ", n);
	if (n > 0)
		printf("positive");
	else if (n < 0)
		printf("negative");
	else
		printf("zero");
	printf("\n");
	return (0);
}
