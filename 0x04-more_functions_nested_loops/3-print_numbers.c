#include "holberton.h"
/**
 *print_numbers - This fuction print the numbers, from 0 to 9 followed
 *by a new line.
 *Return:
 */

void print_numbers(void)
{
	int d;

	for (d = '0'; d >= '0' && d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
