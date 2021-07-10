#include "holberton.h"
/**
*_pow_recursion - This function return the value of x raised to the power of y.
*@x: result of raised to the power of y
*@y: num which i use to obtain the raised in x.
*Return: always is x.
*/
int _pow_recursion(int x, int y)

{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
