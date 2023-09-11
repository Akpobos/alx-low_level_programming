#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;

	if (!name || !owner)
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (!ptr)
		return (NULL);
	ptr->age = age;
	ptr->name = name;
	ptr->owner = owner;
	return (ptr);
}
