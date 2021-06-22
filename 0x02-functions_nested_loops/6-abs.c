#include <stdio.h>
#include "holberton.h"
/**
 *_abs: This function we say whats the absolute value of the integer.
 *description - This is a script that prints the absolute value of an integer
 *@r: This variable is an aleatory character
 *Return: (r) if the variable is >= 0, (r*0) if the variable is < than 0
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}

	else
	{
	return (r * -1);
	}
}
