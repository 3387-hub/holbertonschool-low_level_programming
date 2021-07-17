#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - This function allocates memory using malloc.
 *@b: This is the quantify to malloc using to allocate memory.
 *Return: fi there is no errors return my pointer, if there is error
 *return (98)
 */

void *malloc_checked(unsigned int b)

{
        void *s;

	s = malloc(sizeof(unsigned int) * b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);

}
