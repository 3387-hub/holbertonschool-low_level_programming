#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - This function prints a name
 * @name: it's the  name that i need print
 *@f: is the pointer to my function that prints name.
 */
void print_name(char *name, void (*f)(char *))

{

	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);

}
