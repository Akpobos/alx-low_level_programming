#include "dog.h"

/**
 * free_dog - Free dog memory
 * @d: dog struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		d->name = NULL;
		free(d->owner);
		d->owner = NULL;
		free(d);
	}
}
