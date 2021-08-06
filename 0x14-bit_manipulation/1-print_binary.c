#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *print_binary - This function prints the binary representation of a number.
 *@n: It's the number to represent in binary.
 */
void print_binary(unsigned long int n)
{
	int i;
	int res;
	int digits = 0;
	unsigned long int dec = n;

	while (n)
	{

		n = n >> 1;
		digits++;
	}
	for (i = digits - 1; i >= 0; i--)
	{
		res = dec >> i;

		if (res & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	if (dec == 0)
	{
		_putchar('0');
	}
}
