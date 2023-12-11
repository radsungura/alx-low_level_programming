#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another string
 * @dest: destination string
 * @src: string to add
 * @n: bytes of the str to concatenate
 *
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
