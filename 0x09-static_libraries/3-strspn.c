#include "main.h"

/**
 * *_strspn - find the length of a prefix
 * @s: string to check
 * @accept: characters to compare to s
 *
 * Return: the number of times that the condition is verified
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, flag;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (k);
		}
	}

	return (0);
}
