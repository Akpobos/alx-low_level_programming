#include "dog.h"

/**
 * _strlen - Get string length
 * @str: the string
 * Return: the length
 */
unsigned int _strlen(char *str)
{
	unsigned int c = 0;

	while (*str)
	{
		c++;
		str++;
	}
	return (c);
}

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
	unsigned int l1, l2, i = 0;

	if (!name || !owner)
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (!ptr)
		return (NULL);
	ptr->age = age;
	l1 = _strlen(name);
	ptr->name = malloc(sizeof(*name) * (l1 + 1));
	l2 = _strlen(owner);
	ptr->owner = malloc(sizeof(*owner) * (l2 + 1));
	if (!ptr->name || !ptr->owner)
	{
		free(ptr->name);
		ptr->name = NULL;
		free(ptr->owner);
		ptr->owner = NULL;
		free(ptr);
		ptr = NULL;
		return (NULL);
	}

	while (*name)
	{
		ptr->name[i] = *name;
		name++;
		i++;
	}
	ptr->name[i] = '\0';
	i = 0;
	while (*owner)
	{
		ptr->owner[i] = *owner;
		owner++;
		i++;
	}
	ptr->owner[i] = '\0';
	return (ptr);
}
