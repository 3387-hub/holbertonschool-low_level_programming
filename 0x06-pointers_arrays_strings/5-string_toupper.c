#include "holberton.h"
/**
 * string_toupper - This function changes all the characters for uppercase.
 *@s: This pointer char modifies the string.
 *Return: Always is (s).
 */

char *string_toupper(char *s)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 97 && s[i] < 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
