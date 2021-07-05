#include "holberton.h"
/**
 *_memset - This function fills memory with a constant byte.
 *@s: Is the pointer to edit with another pointer
 *@b: Is the value of replace in each place of s
 *@n: Is the number of place that i need to replace in s.
 *Return: always is s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int e;
	char value = b;
	char *p = s;

	for (e = 0; e < n; e++)
	{
		p[e] = value;
	}
	return (s);

}
