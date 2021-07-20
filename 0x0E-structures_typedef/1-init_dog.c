#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize name, age, owner.
 *@d: This is the structur which i replace name, age and owner
 *@name: This is the pointer which will be replace for value in d.
 *@age: This is the pointer which will be replace for value in d.
 *@owner: This is the pointer which will be replace for value in d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d  == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
