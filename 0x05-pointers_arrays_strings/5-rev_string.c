#include "holberton.h"
/**
 * rev_string - This function reverse a string
 *@s: is the variable which contain the string
 */
void rev_string(char *s)
{

	int a;
	int b;
	int i1;
	int i2;
	int tmp1;
	int tmp2;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	b = a;
	for (i1 = b - 1, i2 = 0; i2 < b / 2; i1--, i2++)
	{
		tmp1 = s[i2];
		tmp2 = s[i1];
		s[i2] = tmp2;
		s[i1] = tmp1;
	}
}
