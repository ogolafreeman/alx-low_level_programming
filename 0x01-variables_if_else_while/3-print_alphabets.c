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

	while (xy <= 'z' && ab <= 'Z')
	{
		putchar(xy);
		putchar(ab);
		xy++;
		ab++;
	}
	putchar('\n');
	return (0);
}