#include "holberton.h"
/**
 * swap_int - This function swaps the values of two integers.
 *@a: This pointers swap the values of b  integer.
 *@b: This pointers swap the values of a  integer.
 */

void swap_int(int *a, int *b)

{
	    int c = *a;
	    int d = *b;

	    *b = c;
	    *a = d;
}
