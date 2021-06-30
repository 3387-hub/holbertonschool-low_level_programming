#include "holberton.h"
/**
 * puts2 - This function prints every other character of a string, starting
 * with the first character, followed by a new line.
 *@str: Is the variable which give us the string to use
 */
void puts2(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i += 2)
	{

	_putchar(str[i]);
	}
	_putchar('\n');
}
