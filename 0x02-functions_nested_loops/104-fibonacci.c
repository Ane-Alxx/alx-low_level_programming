#include <stdio.h>
/**
 * 
 * 
 * 
 * Return: always 0 (success)
 */

	int main(void)
	{
		unsigned long int i;
		unsigned long int n = 1;
		unsigned long int nth = 2;
		unsigned long int l = 1000000000;
		unsigned long int n1;
		unsigned long int n2;
		unsigned long int nth1;
		unsigned long int nth2;


		printf("%lu", n);


		for (i = 1; i < 91; i++)
		{
			printf(", %lu", nth);
			nth += n;
			n = nth - n;
		}


		n1 = (n / l);
		n2 = (n % l);
		nth1 = (nth / l);
		nth2 = (nth % l);


		for (i = 92; i < 99; ++i)
		{
			printf(", %lu", nth1 + (nth2 / l));
			printf("%lu", nth2 % l);
			nth1 = nth1 + n1;
			n1 = nth1 - n1;
			nth2 = nth2 + n2;
			n2 = nth2 - n2;
		}
		printf("\n");
		return (0);
	}
