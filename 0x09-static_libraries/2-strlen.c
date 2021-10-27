#include "main.h"
/**
 * _strlen - This function returns the length of a string.
 * @s: Give us length of a string.
 * Return: always is (count)
 */
int _strlen(char *s)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{}

	return (p - s);
}
