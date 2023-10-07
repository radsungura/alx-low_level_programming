#include "main.h"

/**
 * _strncpy - copies string in an other variable
 * @dest: variable of destination
 * @src: variable of source
 * @n: number of character
 *
 * Return:destination variable pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
