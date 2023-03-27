#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - program that generates random valid 
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int x, y, z;

	y = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pass[x] = rand() % 78;
		y += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - y) - '0' < 78)
		{
			z = 2772 - y - '0';
			y += z;
			putchar(z + '0');
			break;
		}
	}
	return (0);
}
