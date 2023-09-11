#include "dog.h"

/**
 * print_dog - Prints dog
 * @d: Dog strucn
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("(nil)");
	}
}
