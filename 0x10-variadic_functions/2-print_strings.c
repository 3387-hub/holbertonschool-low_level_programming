#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - This function prints strings, followed a new line.
 *@separator: Is the string to be printed between the string.
 *@n:Is the number of strings paassed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	char *x;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
		{
			x = va_arg(ap, char *);
			if (x == NULL)
				{
					printf("(nil)");
				}
			printf("%s", x);
			if (i != n - 1)
				{
					printf("%s", separator);
				}
		}
	va_end(ap);
	printf("\n");
}
