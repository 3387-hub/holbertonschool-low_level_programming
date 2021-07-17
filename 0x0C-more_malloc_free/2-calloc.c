#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - This function allocates memory for an array, using malloc
 *@nmemb: i allocate memory according to the elements in this variable
 *@size: This is the size of my nmemb
 *Return: if _calloc fails return 0, if not always return pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		pointer[i] = 0;
	}

	return (pointer);
}
