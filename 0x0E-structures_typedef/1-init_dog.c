#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - function that initialize a variable of type struct dog
 *
 *@d: The dog inizialize
 *@name: Name of a dog
 *@age: Age of a dog
 *@owner: Owner of a dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
