#include <stdio.h>
/**
 * main - Is the principal function
 * Return: (0) always is 0 (success)
 */

int main(void)

{

int i = 48;
while (i <= 57)
{
putchar(i);

if (i != 57)
{
putchar(',');
putchar(' ');
}
i++;
}

putchar(10);
return (0);
}
