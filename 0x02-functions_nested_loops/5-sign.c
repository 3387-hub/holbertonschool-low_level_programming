#include "holberton.h"

/**
 *print_sign - This function pritns +,- or 0 if n is +,- or 0
 *@n: This variable give us a integer character.
 *Return: (1) for numbers +, (0) for 0 and (-1) for numbers -
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}


	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}

	else
	{
		_putchar(45);
		return (-1);
	}
}

