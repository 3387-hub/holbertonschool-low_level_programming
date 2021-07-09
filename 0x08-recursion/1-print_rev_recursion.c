#include "holberton.h"
/**
 *_print_rev_recursion - This function prints a string in reverse
 *@s: is the pointer to the string that i need prints in reverse
 *
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
