#include "holberton.h"
/**
 *print_last_digit - This function print the last digit of the p
 *@p: is the number it wich we want to have the last digit
 *Return: always is the last digit of our variable
 */

int print_last_digit(int p)
{
	if (p < 0)
	{
		p = (p % 10) * -1;
	}
	else
	{
		p = (p % 10);
	}
	_putchar(p + '0');
	return (p);
}
