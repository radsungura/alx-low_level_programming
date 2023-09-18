#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: String to test
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
