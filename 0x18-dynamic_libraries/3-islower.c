#include "main.h"
#include <stdio.h>

/**
 *_islower -   This function  return  one (1) if c is lowercase
 *@c: - The function of this variable is give us a integer character
 *Return: (1) if my character is a lowercase, always is 0 (success)
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

