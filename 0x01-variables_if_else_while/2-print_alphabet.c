#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char xy = 'a';

	while (xy <= 'z')
	{
		putchar(xy);
		xy++;
	}
	putchar('\n');
	return (0);
}
