#include "holberton.h"
#include <stddef.h>
/**
 * _strstr - This function locate a substring
 *@haystack: string where we search the substring
 *@needle: substring that i need find in haystack
 *Return: &needle[i] if there are coincidence NULL if not.
 */
char *_strstr(char *haystack, char *needle)

{

	int e;
	int i;

	for (e = 0; haystack[e] != '\0'; e++)
	{

		for (i = 0; needle[i] != '\0'; i++)
		{

			if (haystack[i -1] == needle[i -1])
			{
				return (&needle[e]);
			}
		}
	}
	return (NULL);

}
