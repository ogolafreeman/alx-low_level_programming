#include<stdio.h>
/**
 * main - finds and prints the sum of the even values followed
 * by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	unsigned long y, z, next, sum;

	y = 1;
	z = 2;
	sum = 0;

	while (x <= 33)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum = sum + y;
		}
		++x;
		next = y + z;
		y = z;
		z = next;
	}
	printf("%lu\n", sum);
	return (0);
}
