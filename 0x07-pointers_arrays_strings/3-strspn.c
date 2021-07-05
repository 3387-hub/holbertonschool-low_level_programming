#include "holberton.h"
/**
 * _strspn - This function gets the length of a prefix substring.
 *@s: we compare it with accept for get the number of bytes that these have
 *in common.
 *@accept:
 *Return: Always unsigned int ()
 */

unsigned int _strspn(char *s, char *accept)

{
        int e;
	int i;
	int fined = 1;

	for (e = 0; s[e] != '\0' && fined; e++)
	{
		fined = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[e])
				fined = 1;
		}
	}
	return ((unsigned int) e - 1);
}
