#include "holberton.h"
/**
 * _strlen - This function returns the length of a string.
 * @s: Give us length of a string.
 * Return: always is (count)
 */
int _strlen(char *s)
{
	unsigned int count = 0;
	char i = *s;

	while (i != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
