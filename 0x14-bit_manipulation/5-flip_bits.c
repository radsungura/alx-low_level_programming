#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits you would need 
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b;
	int i;

	b = n ^ m;
	i = 0;

	while (b)
	{
		i++;
		b &= (b - 1);
	}

	return (i);
}
