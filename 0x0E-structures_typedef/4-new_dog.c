#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Dog name
 * @age: Dog Age
 * @owner: Dog owner
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = NULL;
	unsigned int ln, lo;

	if (!name || !owner)
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ln = 0;
	lo = 0;
	while (*(name + ln))
		ln++;
	while (*(owner + lo))
		lo++;
	ptr->name = malloc(sizeof(char) * (ln + 1));
	ptr->owner = malloc(sizeof(char) * (lo + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		ptr->name = NULL;
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	ptr->age = age;
	for (ln = 0; *(name + ln); ln++)
		*(ptr->name + ln) = *(name + ln);
	*(ptr->name + ln) = '\0';
	for (lo = 0; *(owner + lo); lo++)
		*(ptr->owner + lo) = *(owner + lo);
	*(ptr->owner + lo) = '\0';
	return (ptr);
}
