#include "holberton.h"
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
	int x = min;

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int) * (max - min) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (; x < max - min; x++, min++)
	{
		pointer[x] = min
	}

	return (pointer);
}
