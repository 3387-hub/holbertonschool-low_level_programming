#include "holberton.h"
/**
 * cap_string - This function capitalizes all words of a string
 *@s: This is the main string
 *
 *Return: return always is s.
 */

char *cap_string(char *s)
{
	char x[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{'
		    , '}', '\0'};
	int i;
	int i2;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122 && s[i] == 0)
		{
			s[i] >= 97 && s[i] <= 122
		}
		for (i2 = 0; x[i2] != '\0'; i2++)
		{
			if (s[i] == x[i2])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
				s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
