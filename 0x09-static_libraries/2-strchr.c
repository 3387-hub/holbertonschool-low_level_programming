#include "main.h"
#include <stddef.h>
/**
 * _strchr - This function locate a character in a string.
 *@s: string where we search the chracarter of c.
 *@c: Character that we search in the string s.
 *Return: To the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{

	int e;

	for (e = 0; s[e] != '\0' ; e++)
	{
		if (s[e] == c)
		{
			return (&s[e]);
		}
	}
	if (s[e] == c)
	{
		return (&s[e]);
	}
	return (NULL);
}
