#include "holberton.h"
/**
 *print_diagonal - This function Missing a blank line after declarations
 *@n: this variable is the  # of times that the character (/) is prints.
 */

void print_diagonal(int n)

{

	int e, i;

	for (e = 1; e <= n; e++)
	{
		for (i = 1; i <= e; i++)
		{
			_putchar(' ');

		}
		_putchar(92);
		_putchar('\n');
	}
}
