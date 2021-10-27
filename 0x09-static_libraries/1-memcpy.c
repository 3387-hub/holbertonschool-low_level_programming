#include "main.h"
/**
 *_memcpy - This function copies memory area.
 *@src: Memory area to be copied.
 *@n: number of bytes to be copied.
 *@dest: Destiny when we paste n bytes from src.
 *Return: Always is *dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int e;
	char *p = src;

	for (e = 0; e < n; e++)
	{
		dest[e] = p[e];
	}
	return (dest);

}
