#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
