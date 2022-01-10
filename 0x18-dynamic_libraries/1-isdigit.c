#include "main.h"
/**
 *_isdigit - This function checks for a digit (0 to 9)
 *@c: This variable is a character of the table Ascii
 *Return: if c is a digit return (1), return (0) otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
