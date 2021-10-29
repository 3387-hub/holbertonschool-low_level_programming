#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - This function creates an array of integers
 *@min: Array that i create contain all values from min until to max
 *@max: This is my limit of my array.
 *Return: If the function fails it return 0, if not return always pointer
 */

int *array_range(int min, int max)


{
	int *pointer;
	int x;
	int i = min;


	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= max - min; x++, i++)
	{
		pointer[x] = i;
	}

	return (pointer);
}
