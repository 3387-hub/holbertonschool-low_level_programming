#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - This function
 *@a: is my pointer to my array to modify
 *@size: is the size of (a) my array.
 */
void print_diagsums(int *a, int size)

{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = a[i] + sum1;
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum2 = a[i] + sum2;
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
