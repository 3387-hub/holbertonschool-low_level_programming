#include "holberton.h"
/**
 *print_most_numbers - This function prints from 0 until 9
 *except number 2 and 4.
 *Return:
 */

void print_most_numbers(void)
{
	int d;

	for(d = '0'; d <= '9'; d++)
	{
		if(d != '2' && d != '4')
		{
			_putchar(d);
		}
	}
	_putchar('\n');
}
