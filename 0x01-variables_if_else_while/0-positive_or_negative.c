#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function principal
 * Return: (0) always 0 (success)
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

if (n >= 0)
{
  printf("%d is positive\n", n);
}
else
{
  printf("%d is negative\n", n);
}
return (0);

}
