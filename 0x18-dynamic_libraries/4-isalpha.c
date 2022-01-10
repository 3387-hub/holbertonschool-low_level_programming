#include <stdio.h>
#include "main.h"

/**
 *_isalpha - This function print the lowercase alphabet
 *@c: This variable give us a integer character.
 *Return: (1) or (0) all depens if the character is a letter.
 */
int _isalpha(int c)
{
		if (c >= 97 && c <= 122)
		{
		return (1);
		}
		else if (c  >= 65 && c <= 90)
		{
		return (1);
		}
		else
		{
		return (0);
		}
}
