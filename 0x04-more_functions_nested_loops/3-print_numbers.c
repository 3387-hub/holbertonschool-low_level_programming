#include "main.h"

/**
 * print_numbers - This function prints the number from 0 to 9.
 * Return: none return (0)
 */

void print_numbers(void)

{
	int i = '0';

	for(; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
