#include "holberton.h"
/**
 * print_rev - This function  prints a string, invert values of an array
 * @s: This variable give us the string to use.
 *
 */

void print_rev(char *s)
{
	int a;
	int b;


	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = a;
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}





