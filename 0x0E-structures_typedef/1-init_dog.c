#include <stdlib.h>
#include "dog.h"

/**
* init_dog - dog data structure initialisation
* @d: point to doggy struct
* @name: ele one
* @age: ele two
* @owner: ele three
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
