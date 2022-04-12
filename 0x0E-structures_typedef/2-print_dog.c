#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog
 *
 * @d: dog pointer
 *
 * Return: ALways 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf(" ");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age < 0 || d->owner == NULL)
		printf("nil");
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
