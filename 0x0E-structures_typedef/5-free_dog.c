#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function free dogs
 *@d: is my pointer which i free name and owner.
 *
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
