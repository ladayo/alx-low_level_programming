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

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
