#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char xy = 'a';
	char ab = 'A';

	while (xy <= 'z')
	{
		putchar(xy);
		xy++;
	}
	while (ab <= 'Z')
	{
		putchar(ab);
		ab++;
	}
	putchar('\n');
	return (0);
}
