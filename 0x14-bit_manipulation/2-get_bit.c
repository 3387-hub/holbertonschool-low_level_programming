#include <stdio.h>
#include "main.h"
/**
 *get_bit - This function returns the value of a bit given index
 *@n: This is the n number to analise.
 *@index: This is the index to return.
 *Return: index or -1 in case of error.
 */
int get_bit(unsigned long int n, unsigned int index)

{
	int j;
	int result;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	result = n >> index;
	if (result & 1)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}

	index = j;
	return (index);
}
