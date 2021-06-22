#include "holberton.h"
#include <stdio.h>

/**
 * _islower -   return  one (1) if c is lowercase
 *Description - int c is a variable wich have caracters
 *c - is my variable wich have a lower or upercase.
 *Return(1): if my character is a lowercase, always is 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

