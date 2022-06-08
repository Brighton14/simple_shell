#include "shell.h"

/**
 * *strn_cat - concatenates two strings.
 * @dest: resulting string.
 * @src: source string.
 * Return: pointer to dest
 */

char *strn_cat(char *dest, char *src)
{
	int i, n;

	n = strn_lgth(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
