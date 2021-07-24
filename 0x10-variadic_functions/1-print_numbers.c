#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - This function prints numbers, followed by a new line.
 *@separator: is the character that i need put between the numbers in ...
 *@n: is the size of numbers in ...
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list ap;
	unsigned int i, x;

	va_start(ap, n);

	if (separator == NULL)
		{
			separator = "";
		}
	for (i = 0; i < n; i++)
		{
			x = va_arg(ap, int);
			printf("%d", x);
			if (i != n - 1)
				printf("%s", separator);
		}

	va_end(ap);
	printf("\n");
}
