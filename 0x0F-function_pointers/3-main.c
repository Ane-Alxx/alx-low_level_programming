#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - entry
* @argc: arg_num
* @argv: arg_pointer
*
* Return: Always 0 (Success).
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int pp1, pp2;
	char *pop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pp1 = atoi(argv[1]);
	pop = argv[2];
	pp2 = atoi(argv[3]);

	if (get_op_func(pop) == NULL || pop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*pop == '/' && pp2 == 0) || (*pop == '%' && pp2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(pop)(pp1, pp2));

	return (0);
}
