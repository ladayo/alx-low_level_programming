#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - make a new dog
 * @d: struct of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
        struct dog *new_dog;
	
	new_dog = d;
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
}
