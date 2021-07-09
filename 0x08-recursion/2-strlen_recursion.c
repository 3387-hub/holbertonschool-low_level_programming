#include "holberton.h"
/**
 *_strlen_recursion - This function return the lenght of a string
 *@s: This is my pointer to the string to return their lenght
 *Return: Always return lenght of the string.
 */
int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return	(1 + _strlen_recursion(s + 1));
	}
}
