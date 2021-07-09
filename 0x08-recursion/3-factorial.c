#include "holberton.h"
/**
 * factorial - This function returns the factorial of a givin number.
 *@n: is the number that i need to know the factorial.
 *Return: Always is 0.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)

	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
