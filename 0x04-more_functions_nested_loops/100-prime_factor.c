#include <stdio.h>
#include <math.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* followed by a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	long int number = 612852475143;
	long int largest = -1;
	long int temp;

	while (number % 2 == 0)
	{
		largest = 2;
		number /= 2;
	}

	for (temp = 3; temp <= sqrt(number); temp += 2)
	{
		while (number % temp == 0)
		{
			largest = temp;
			number = number / temp;
		}
	}
	if (number > 2)
		largest = number;

	printf("%ld\n", largest);

	return (0);
}
