#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - This function contatenates two string
 *@s1: This is my first string to concatenate with s2.
 *@s2: This is my seond string to concatenate with s1.
 *@n: This is the size of my string s2.
 *Return: if my strings aren't empty is pointer if it's then NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *pointer;
	unsigned int i, j, c, x;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	pointer = malloc((sizeof(char) * (i + n)) + 1);
	if (pointer == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		pointer[c] = s1[c];
	}

	for (x = 0; x < n; x++)
	{
		pointer[c + x] = s2[x];
	}
	pointer[c + x] = '\0';

	return (pointer);
}
