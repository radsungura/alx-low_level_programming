#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, power;
	int c;

	if (b == NULL)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}

	for (power = 1, uint = 0, c--; c >= 0; c--, power *= 2)
	{
		if (b[c] == '1')
			uint += power;
	}

	return (uint);
}
