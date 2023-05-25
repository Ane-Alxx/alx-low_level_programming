#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - function for SumThemAll
*
* @n: all dem params
* @...: aum
*
* Return: some value
*
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list bucket;
	unsigned int handle = 0;
	unsigned int tot = 0;

	va_start(bucket, n);

	while (handle < n)
	{
		tot += va_arg(bucket, int);
		handle++;
	}
	va_end(bucket);

	return (tot);
}
