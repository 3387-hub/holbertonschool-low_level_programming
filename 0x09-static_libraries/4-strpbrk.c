#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - This function search a string for any of a set of bytes
 *@s: it string contains the character  that i search match with accept.
 *@accept: it string contains the charactes that i search match with s
 *Return: char*
 */

char *_strpbrk(char *s, char *accept)

{
	int e;
	int i;


	for (e = 0; s[e] != '\0'; e++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[e])
			{
				return (&s[e]);
			}
		}
	}
	return (NULL);
}
