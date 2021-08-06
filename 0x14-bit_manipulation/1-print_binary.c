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
	int c, result;
	int j;

	for (c = 0; n >> c; c++)
	{
		result = n >> c;
	}
	if (n == 0)
	{
		putchar('0');
	}
	for (j = c - 1; j >= 0; j--)
	{
		result = n >> j;
		if (result & 1)
		{
			putchar('1');
		}
		else
		{
			putchar('0');
		}
	}
}
