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
        int passwrd[10];
        int i, t, n;

        sum = 0;

        srand(time(0));

	for (i = 0; i < 12; i++)
        {
                pass[i] = rand() % 39;
                temp += (pass[i] + '0');
                putchar(pass[i] + '0');
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
