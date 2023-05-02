#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Start
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int pass[100];
	int i;
	int sum = 0;
	int j;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}

	return (0);
}
