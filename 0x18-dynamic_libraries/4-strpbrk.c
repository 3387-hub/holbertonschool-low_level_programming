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
	int o;
	int i;
	int finded = 0;
	int t;

	for (o = 0; s[o] != '\0'; o++)
		t = o;
	for (o = 0; accept[o] != '\0'; o++)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (accept[o] == s[i])
			{
				if (i <= t)
				{
					t = i;
					finded = 1;
				}
			}
		}
	}
	if (finded == 1)
	{
		return (&s[t]);
	}
	else
	{
			return (NULL);
	}
}
