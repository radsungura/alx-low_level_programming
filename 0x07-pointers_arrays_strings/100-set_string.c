#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer wich point to the pointer to set to char
 * @to: the char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
