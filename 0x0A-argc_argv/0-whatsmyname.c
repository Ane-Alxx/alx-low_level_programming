#include <stdio.h>
#include "main.h"

/**
* main - entry point for name program
* @argc: arguments
* @argv: array
*
* Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
