#include "holberton.h"
/**
 * reverse_array - This function reverses the content of the integer characters
 *@a: This is my string to reverse
 *@n:This is the total data on my string
 *Return: ()
 */
void reverse_array(int *a, int n)

{
	int size;
	int indx;
	int indx2;
	int tmp1;
	int tmp2;


	for (size = 0; a[size] <= n; size++)
	{
	}
	for (indx = n - 1, indx2 = 0; indx2 < size / 2; indx--, indx2++)
	{
		tmp1 = a[indx2];
		tmp2 = a[indx];
		a[indx] = tmp1;
		a[indx2] = tmp2;
	}

}
