#ifndef DOG_PROPERTIES
#define DOG_PROPERTIES
/**
 * struct dog - defines the xtics of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owwner of dog
 *
 * Description: define the properties of dogs
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
