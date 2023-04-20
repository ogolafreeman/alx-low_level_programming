#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @arg: number of arguments
 * @avg: arrays of arguments
 *
 * Return: Always 0
 */
int main(int arg, char *avg[])
{
	int byt, x;
	char *a;

	if (arg != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(avg[1]);
	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *) main;

	for (x = 0; x < byt; x++)
	{
		if (x == byt - 1)
		{
			printf("%02hhx\n", a[x]);
			break;
		}
		printf("%02hhx ", a[x]);
	}
	return (0);
}
