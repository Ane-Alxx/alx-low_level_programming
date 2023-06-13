#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
* read_textfile- function for read text file
* @filename: read me
* @letters: read these
* Return: the return value
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *f;
	ssize_t d;
	ssize_t u;
	ssize_t e;

	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	f = malloc(sizeof(char) * letters);
	e = read(d, f, letters);
	u = write(STDOUT_FILENO, f, e);

	free(f);
	close(d);
	return (u);
}
