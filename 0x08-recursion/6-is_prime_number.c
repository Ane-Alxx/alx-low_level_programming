#include "main.h"

int actual_prime(int n, int i);

/**
* is_prime_number - function for is_prime_number
* @n: number to evaluate
*
* Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	if (n == 1)
	{
		is_prime_number(n);
	}
}
