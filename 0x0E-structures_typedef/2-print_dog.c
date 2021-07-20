#include <stdio.h>
#include "dog.h"

/**
 * print_dog - This function prints dog if it isn't NULL.
 *struct dog - This is the structur to printf.
 *@d: Is the struct which we print.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name %s\nAge %f\nOwner %s\n", d->name, d->age, d->owner);
	}
}
