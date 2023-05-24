#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - function
*
* @s: arg_op
*
* Return: func_point
*
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int nummy = 0;

	while (ops[nummy].op != NULL && *(ops[nummy].op) != *s)
	{
		nummy++;
	}

	return (ops[nummy].f);
}
