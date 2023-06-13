#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - function to
* @filename: poiny
* @text_content: strinny
* Return: stuff
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int q, u, e = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (e = 0; text_content[e];)
			e++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	u = write(q, text_content, len);

	if (q == -1 || u == -1)
		return (-1);

	close(q);

	return (1);
}
