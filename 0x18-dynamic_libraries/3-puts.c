#include "main.h"
/**
 * _puts - This function prints a string.
 * @str: is the variable which give the string to print
 *
 */

void _puts(char *str)

{
	char *p = str;

		for (; *p > 0; p++)
		{
			_putchar(*p);
		}
	_putchar(10);
}
