#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - This function return a pointer to a newly allocated space in
 *memory, which contains a copy of the string given as a parameter.
 *@str: This is the string that i'm going to copy.
 *Return: always return pointer.
 */
char *_strdup(char *str)

{
	char *pointer;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	pointer = malloc(sizeof(char) * i + 1);

	for (j = 0; j < i + 1; j++)
	{
		pointer[j] = str[j];
	}
/*This assignment below it's why i need add the '\0' to the end of the string*/
	pointer[i] = '\0';
	return (pointer);
	free(pointer);
}
