#include <unistd.h>
/**
* _putchar - put char function
* @c: character
*
* Return: 1 (success).
* On error, return -1 ,set error number
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
