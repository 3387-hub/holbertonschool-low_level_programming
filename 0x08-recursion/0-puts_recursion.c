#include "holberton.h"
/**
 * _puts_recursion - This function prints a string followed by a new line
 *@s: This function is the pointer to my string
 *Return:
 *
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}

}
