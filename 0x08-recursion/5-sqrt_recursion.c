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

/**
 * _sqrt_ check - This function allows plus the x to find the square root
 *of n with x
 *@n: This is the number which i return the square root.
 *@x: This is my iterator to find the square root.
 *Return: Always is (n and x + 1 until find square root of n, in that case
 *just will be x.
 */
int _sqrt_check(int n, int x)
{

	if (x > 1 && x == n)
		return (-1);

	if (x * x == n)
		return (x);
	return (_sqrt_check(n, x + 1));
}
