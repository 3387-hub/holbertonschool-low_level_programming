#include "holberton.h"
/**
 *is_prime_number - This function return 1 if n is prime and 0 is it isn't
 *@n: This is the number that my function analise to known if it's prime or not
 *Return: 1 if n is prime and 0 if it isn't.
 */
int is_prime_number(int n)

{
	if (n < 0 || n == 1)
	{
		return (0);

	}
	return (prime_check(n, 2));
}


/**
 * prime_check - This function divide n to known if its prime.
 *@n: This is the number that my function analise to known if it's prime or not
 *@x: this is my variable that i use like module for analise n and know if
 *it's prime or not
 *Return: 1 if is prime and 0 if it's not.
 */

int prime_check(int n, int x)

{

	if (n % x == 0)
	{
		return (0);
	}
	if (n % x  != 0 && x == n / 2)
	{
	return (1);
	}
	else
	{
		return (prime_check(n, x + 1));
	}
}
