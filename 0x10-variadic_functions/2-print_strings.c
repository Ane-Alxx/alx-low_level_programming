#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - function to printString
* @separator: string div
* @n: num of strings
* @...: num of strings
*
* Description: nill
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list values;
	char *stringPtr;
	unsigned int m = 0;

	va_start(values, n);

	while (m < n)
	{
		stringPtr = va_arg(strings, char *);

		if (strinPtr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", stringPtr);
		}
		if (m != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		m++;
	}
	printf("\n");

	va_end(values);
}
