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
	unsigned int len;

	if (!name || !owner)
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (!ptr)
		return (NULL);
	ptr->age = age;
	len = _strlen(name);
	ptr->name = malloc(sizeof(*name) * (len + 1));
	if (!ptr->name)
	{
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	len = _strlen(owner);
	ptr->owner = malloc(sizeof(*owner) * (len + 1));
	if (!ptr->owner)
	{
		free(ptr->name);
		ptr->name = NULL;
		free(ptr);
		ptr = NULL;
		return (NULL);
	}
	ptr->name = name;
	ptr->owner = owner;
	return (ptr);
}
