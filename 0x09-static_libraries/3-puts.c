#include "holberton.h"
/**
 * _puts - This function prints a string.
 * @str: is the variable which give the string to print
 *
 */

void _puts(char *str)

{
	int i;

	for (i = 0; i < *str; str++)
	{

		_putchar(*str);
	}
	_putchar(10);
}
