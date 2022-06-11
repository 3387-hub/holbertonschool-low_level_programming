#include "search_algos.h"
/**
 * binary_search - function that search an integer
 * with the binary search algorithm.
 * @array: array in which we are going to search
 * a given value.
 * @size: size of the array.
 * @value: value to search in the array.
 * Return: -1 in case of not find value, value in case
 * of find it.
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int right = (int)size - 1;
	int left = 0;
	int middle = 0;
	char *comma = "";

	if (array == NULL)
		return (-1);

	for (; left <= right;)
	{
		i = left;
		printf("Searching in array: ");
		for (; i <= right; i++)
		{
			if (i == right)
				comma = "\n";
			else
				comma = ", ";
			printf("%d%s", array[i], comma);
		}


		middle = ((left + right) / 2);
		if (array[middle] < value)
		{
			left = middle + 1;
			continue;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
			continue;
		}
		else
			return (middle);
	}
	return (-1);
}
