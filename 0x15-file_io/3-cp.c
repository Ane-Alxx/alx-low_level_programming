#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
* Make_b - function
* @file: file
*
* Return:value
*/
char *Make_b(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (b);
}

/**
* F_close - Closes file descriptors.
* @d: The file descriptor to be closed.
*/
void F_close(int d)
{
	int a;

	a = close(d);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", d);
		exit(100);
	}
}

/**
* main - entry
* @ac: first argument
* @av: second argument
*
* Return: 0
*/
int main(int ac, char *av[])
{
	int f, t, rd, wt;
	char *b;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	b = Make_b(av[2]);
	f = open(av[1], O_RDONLY);
	rd = read(f, b, 1024);
	t = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(b);
			exit(98);
		}

		wt = write(t, b, rd);
		if (t == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(b);
			exit(99);
		}

		rd = read(f, b, 1024);
		t = open(av[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(b);
	F_close(f);
	F_close(t);

	return (0);
}
