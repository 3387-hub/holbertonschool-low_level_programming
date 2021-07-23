#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - This function searches for an integer
 *@array: This is the array where i search the integer.
 *@size: This is the size of the array.
 *@cmp: This is my pointer to the function.
 *Return: if size is <= is 0, if i == 1 is (i), and if i == 0 will be (i).
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	int i;

	if (cmp ==  NULL || array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
