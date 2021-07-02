#include "holberton.h"
/**
 * _strncpy - This function copy a string
 *@src: my main string
 *@dest: destiny where i copy str
 *@n: The limit that say us when i need to stop the copy of characters.
 *Return: Always (dest)
 */

char *_strncpy(char *dest, char *src, int n)

{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
