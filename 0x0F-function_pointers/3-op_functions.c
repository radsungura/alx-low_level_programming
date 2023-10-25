#include "3-calc.h"

/**
 * op_add - calculates the sum of two int
 * @a: first int
 * @b: second int
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two int
 * @a: first int
 * @b: second int
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two int
 * @a: first int
 * @b: second int
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of two int
 * @a: first int
 * @b: second int
 *
 * Return: the result of the division between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
