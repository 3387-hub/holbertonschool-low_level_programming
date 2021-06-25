#include "holberton.h"

/**
 *more_numbers - This function prints from 0 to 14.
 *
 */
void more_numbers(void)
{
	int e;
	int u;

	for (u = 1; u <= 10; u++)
	{
		for (e = 0; e <= 14; e++)
		{
			if (e >= 10)
				/** */
			{
				_putchar(e / 10 + '0');
			}
			_putchar(e % 10 + '0');
		}
		_putchar('\n');
	}

}
