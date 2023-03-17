#include<stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main()
{
	char xy = 'a';

	while (xy <= 'z')
	{
		putchar(xy);
		putchar('\n');
		xy++;
	}
	return (0);
}
