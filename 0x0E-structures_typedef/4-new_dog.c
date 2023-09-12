#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
	{
		return (NULL);
	}

	puppy->name = malloc(_strlen(name) + 1);

	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	_strcpy(puppy->name, name);

	puppy->owner = malloc(_strlen(owner) + 1);

	if (puppy->owner == NULL)
	{
		free(puppy->owner);
		free(puppy);
		return (NULL);
	}
	_strcpy(puppy->owner, owner);

	puppy->age = age;

	return (puppy);
}

/**
 * _strlen - length of a string
 * @s: pointer to the string
 * Return: result
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - function that copies a string
 * @dest: pointer to string
 * @src: pointer to another string
 * Return: result
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
