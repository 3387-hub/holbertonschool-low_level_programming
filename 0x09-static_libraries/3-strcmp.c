#include "holberton.h"
/**
 * _strcmp - This function compares two strings.
 *@s1: This is my first string to comparate with the second.
 *@s2: This is my second string to comparate with the first.
 *Return: ()
 */
int _strcmp(char *s1, char *s2)

{
	int indx;

	for (indx = 0; s1[indx] != '\0' && s2[indx] != '\0'; indx++)
	{
		if (s1[indx] != s2[indx])

		{
			return (s1[indx] - s2[indx]);
		}
	}
	return (0);
}
