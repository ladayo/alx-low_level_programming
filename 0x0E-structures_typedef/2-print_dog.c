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
		printf("Name: (nil)\n");
	if (d->age < 0)
		printf("Age: nil\n");
	if (d->owner == NULL)
		printf("Owner: nil\n");
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
