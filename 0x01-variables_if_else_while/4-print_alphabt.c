#include <stdio.h>
/**
 * main - Is the principal function
 * Return: (0) always is 0 (success)
 */

int main(void)

{

int i = 97;

while (i <= 122)
{
	if (i != 101 && i != 113)
		putchar(i);
	i++;
}
putchar(10);
return (0);
}

