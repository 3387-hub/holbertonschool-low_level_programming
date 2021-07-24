 #include "variadic_functions.h"
 #include <stdio.h>
 #include <stdarg.h>
/**
 * print_all - This function prints anything.
 *@format: Arguments recieved.
 */
void print_all(const char * const format, ...)

{
	int i;
	char *space = "";
	char *s;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", space, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", space, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", space, s);
				break;
			default:
				i++;
				continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
