#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints the minimim number of
 * coints to make for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 for (Success) or 1 for (Error)
 */
int main(int argc, char *argv[])
{
	int m, n, r;
	int conis[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	r = 0;

	if (m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (n = 0; n < 5 && n >= 0; n++)
	{
		while (m >= coins[n])
		{
			r++;
			m -= coins[n];
		}
	}
	printf("%d\n", r);
	return (0);
}
