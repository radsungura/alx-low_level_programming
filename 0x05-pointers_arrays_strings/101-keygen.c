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
        int r[10];
        int i, temp, n;

        temp = 0;

        srand(time(0));

	for (i = 0; i < 12; i++)
        {
                r[i] = rand() % 39;
                temp += (r[i] + '0');
                putchar(r[i] + '0');
                if ((2772 - temp) - '0' < 39)
                {
	               n = 2772 - temp - '0';
                       temp += n;
                       putchar(n + '0');
                       break;
                 }

	}
        return (0);
}
