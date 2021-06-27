#include "holberton.h"
/**
 *print_triangle - This function prints a triangule
 *@size: This variable give us a integer which will be the size of the
 *triangule
 */

void print_triangle(int size)
{
	int e, i;

	if (size <= 0)
		_putchar(10);

	else

	for (e = 1; e <= size; e++)
	{

		for (i = 1; i <= size; i++)
		{
			if (i + e <= size)
			{
				_putchar(32);

			}
			else
			{
				_putchar(35);
			}

		}
		_putchar(10);
	}
}
