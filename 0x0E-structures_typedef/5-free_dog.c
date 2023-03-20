#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - a function that fees dogs
 * @d: the dog to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
