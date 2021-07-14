#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - This function concatenate 2 strings
 *@s1: it's my string number 1 to concatenate with s2
 *@s2: It's my string number 2 to concatena with 1
 *Return: Always is pointer.
 */
char *str_concat(char *s1, char *s2)

{
	char *pointer;
	int i, j, n, x;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i] != 0; i++)
		{
		}
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j] != 0; j++, i++)
		{
		}
	}
	pointer = malloc(sizeof(char) * (i + j) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < i; n++)
	{
		pointer[n] = s1[n];
	}
	for (x = 0; x < j; x++)
	{
		pointer[x + n] = s2[x];
	}
	pointer[x + n] = '\0';
	return (pointer);
}
