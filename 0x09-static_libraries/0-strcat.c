#include "main.h"
/**
 * _strcat - This function concatenates two strings
 *@dest: My first string
 *@src: my second string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; src[b] != '\0'; a++, b++)
	{
		dest[a] = src[b];
	}


	return (dest);
}
