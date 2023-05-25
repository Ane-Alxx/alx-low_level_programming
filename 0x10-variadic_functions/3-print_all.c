#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function to print all
* @format: args
*/
void print_all(const char * const format, ...)
{
	int inn = 0;
	char *stringptr, *seperatorptr = "";

	va_list vals;

	va_start(vals, format);

	if (format)
	{
		while (format[inn])
		{
			switch (format[inn])
			{
				case 'c':
					printf("%s%c", seperatorptr, va_arg(vals, int));
					break;
				case 'i':
					printf("%s%d", seperatorptr, va_arg(vals, int));
					break;
				case 'f':
					printf("%s%f", seperatorptr, va_arg(vals, double));
					break;
				case 's':
					stringptr = va_arg(vals, char *);
					if (!stringptr)
						stringptr = "(nil)";
					printf("%s%s", seperatorptr, stringptr);
					break;
				default:
					inn++;
					continue;
			}
			seperatorptr = ", ";
			inn++;
		}
	}

	printf("\n");
	va_end(vals);
}
