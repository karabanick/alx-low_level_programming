#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initializes a variable type struct dog
 * @d: pointer
 * @name: element of the structure
 * @age: element
 * @owner: element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}