#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
        int pass[10];
        int i, sum, n;

        sum = 0;

        srand(time(0));

	for (i = 0; i < 12; i++)
        {
                pass[i] = rand() % 39;
                sum += (pass[i] + '0');
                putchar(pass[i] + '0');
                if ((2772 - sum) - '0' < 39)
                {
	               n = 2772 - sum - '0';
                       sum += n;
                       putchar(n + '0');
                       break;
                 }

	}
        return (0);
}
