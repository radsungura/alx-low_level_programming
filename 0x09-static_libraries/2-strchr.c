#include "main.h"
#include <stdio.h>

/**
 * *_strchr - search a character in a string
 * @s: string to search in
 * @c: char to search
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
		if (x == 0)
		{
			return (NULL);
		}
	}
}
