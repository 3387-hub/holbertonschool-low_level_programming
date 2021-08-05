#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint - This function converts a binary to an unsigned int.
 *@b: This is the string that i'll becomes to unsigned.
 *Return: always is result
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	int result = 0;
	int expo = 1;

	if (b)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] != '0' && b[i] != '1')
			{
				return (0);
			}
		}
		for (j = (i - 1); j >= 0; j--)
		{
			result += ((b[j] - '0') * expo);
			expo *= 2;
		}
	}
	return (result);
}
