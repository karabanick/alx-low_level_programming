#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints struct dog
 * @d: pointer to the struct
 * Return: result
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
		printf("Age: %.1f\n", d->age);
	}
}
