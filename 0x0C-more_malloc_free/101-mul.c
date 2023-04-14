#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies tqo numbers as arguments
 * @arg: number of argumet
 * @avg: the argument;
 * Return: Always 0
 */
int main(int arg, char *avg[])
{
	unsigned long typ;
	int x, y;

	if (arg != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < arg; x++)
	{
		for (y = 0; avg[x][y] != '\0'; y++)
		{
			if (avg[x][y] > 57 || avg[x][y] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	typ = atoi(avg[1]) * atoi(avg[2]);
	printf("%lu\n", typ);
return (0);
}
