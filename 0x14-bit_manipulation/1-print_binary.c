#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int p;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (m = n, p = 0; (m >>= 1) > 0; p++)
	;

	for (p=0; p >= 0; p--)
	{
		if ((n >> p) & 1)
			printf("1");
		else
			printf("0");
	}
}
