#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function for PrintNumbers
* @separator: end of string mark
* @n: count
* @...: num of nums
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nummy;
	unsigned int indie = 0;

	va_start(nummy, n);

	while (indie < n)
	{
		printf("%d", va_arg(nummy, int));

		if (indie != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	indie++;
	}

	printf("\n");

	va_end(nummy);
}
