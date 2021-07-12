#include "holberton.h"
/**
 * _sqrt_recursion - This function return the natural square root of a number
 *@n: Is my residing which i retunr the natural square root.
 *Return: Always return x.
 */
int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));

}

