#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char xy;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (xy = 'a'; xy <= 'f'; xy++)
	{
		putchar(xy);
	}
	putchar('\n');
	return (0);
}
