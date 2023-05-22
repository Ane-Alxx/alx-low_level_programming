#include <stdlib.h>
#include "dog.h"

/**
* free_dog - empty doggy brain
* @d: doggy
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
