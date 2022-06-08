#include "shell.h"

/**
  * print_envn - prints all the environment variables.
  * Return: nothing.
  */

void print_envn(void)
{
	int i;

	i = 0;
	while (environ[i])
		printf("%s\n", environ[i++]);
}
