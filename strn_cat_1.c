#include "shell.h"

/**
 * *strn_cat - concatenates two strings.
 * @dest: resulting string.
 * @src: source string.
 * @n: string length.
 * Return: pointer to dest
 */

char *strn_cat(char *dest, char *src, int n)
{
	int i, m;

	m = strn_lgthh(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
