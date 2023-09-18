#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: String to test
 * Return: the length of the string in s
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
