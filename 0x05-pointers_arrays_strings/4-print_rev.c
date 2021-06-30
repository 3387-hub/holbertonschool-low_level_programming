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
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = a;
	for (c = b - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
