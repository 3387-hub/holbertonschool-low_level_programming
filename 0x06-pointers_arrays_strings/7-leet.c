#include "holberton.h"
/**
 * leet - This fuction encode into 1337
 *@s: This is my string to change the character to numbers
 *Return: Always is 0
 */

char *leet(char *s)

{

	char l[10] = "aAeEoOtTlL";
	char n[10] = "4433007711";
	int e;
	int i;

	for (e = 0; s[e] != '\0'; e++)
	{
		for (i = 0; i < 10; i++)
		{
			if (s[e] == l[i])
			{
				s[e] = n[i];
			}
		}
	}
	return (s);
}
