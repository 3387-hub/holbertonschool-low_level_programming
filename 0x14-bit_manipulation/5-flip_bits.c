#include <stdio.h>
#include "main.h"
/**
 *flip_bits - This function returns the number of bits you would need
 *to flip to get from one number to another
 *@n: Is the number to analise.
 *@m: i don't now what is it.
 *Return: in the corect case return (sum) in the fake case return -1.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{

	unsigned long int tmp;
	unsigned long int sum = 0;

	if (sizeof(n) <= sizeof(unsigned long int) * 8)
	{
		tmp = n ^ m;
		while (tmp > 0)
		{
			sum = sum + (tmp & 1);
			tmp = tmp >> 1;
		}
		return (sum);
	}
	return (-1);
}
