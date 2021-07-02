#include "holberton.h"
/**
 * _strcmp - This function compares two strings.
 *@s1: This is my first string to comparate with the second.
 *@s2: This is my second string to comparate with the first.
 *Return: ()
 */
int _strcmp(char *s1, char *s2)

{
	int size1;
	int size2;
	int indx;

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}

	if (size1 > size2)
	{
		return (15);
	}

	else if (size1 < size2)
	{
		return (-15);
	}
	for (indx = 0; indx < size1 && indx < size2 && indx != '\0'; indx++)
	{
	}
	return (0);
}
