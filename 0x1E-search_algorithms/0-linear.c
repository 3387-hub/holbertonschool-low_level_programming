#include "search_algos.h"
/**
 *linear_search - Function that search and integer
 *with linear algorithm.
 *@array: array of integers to go through.
 *@size: size of the array.
 *@value: value to search
 *Return: Return -1 in case of none match, another way
 *return the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter = 0;
	int index = 0;

	for (; counter < size; counter++, index++)
	{
		printf("Value checked array[%d] = [%d]\n",
			   index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
