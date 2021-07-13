#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 *create_array - This function creates an array of chars, and initializes it
 *with a specific char.
 *@size: is the size of my string.
 *@c: is the character which my function initialices.
 *Return: Always is a pointer, in this case is str.
 */

char *create_array(unsigned int size, char c)

{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
