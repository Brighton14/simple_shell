#include "shell.h"

/**
  * strn_lgth - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */

int strn_lgth(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
