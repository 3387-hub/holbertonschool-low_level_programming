#include "holberton.h"



void print_alphabet_x10(void)

{
	char i = 'a';
	int t;

	for(t=1; t <= 10; t++)
	{

		for(i='a'; i <= 'z'; i++)
		{
	_putchar(i);
	
       
		}
		_putchar('\n');
        }
	
}
