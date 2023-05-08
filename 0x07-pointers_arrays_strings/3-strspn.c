#include "main.h"
/**
* _strspn - function for _strspn
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
  unsigned int hold = 0;
  int I;

  while (*s)
    {
      I = 0;
      while (accept[I]; r++)
	{
	  if (*s == accept[I])
	    {
	      hold++;
	      break;
	    }
	  else if (accept[I + 1] == '\0')
	    return (hold);
	}
      s++;
    }
  return (n);
}
