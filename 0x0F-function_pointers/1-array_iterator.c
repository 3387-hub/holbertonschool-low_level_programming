#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - This function executes a function given as a parameter on
 *each element of an array.
 *@array: This is the  array where i find the elements.
 *@size: This is the size of the array.
 *@action: This is my pointer to point the functionn.
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	int i;

	if (array != NULL && size)
	{
		for (i = 0; i < 5; i++)
		{
			action(array[i]);
		}
	}
	return;
}
