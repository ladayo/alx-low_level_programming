#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggie;
	int i, j, k;
	char *n, *o;

	doggie  = malloc(sizeof(struct dog));
	if (doggie == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(doggie);
		return (NULL);
	}
	o = malloc(sizeof(char) * j + 1);
	if (o == NULL)
	{
		free(n);
		free(doggie);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];
	doggie->name = n;
	doggie->age = age;
	doggie->owner = o;

	return (doggie);
}
