#include<stdio.h>

/**
 * main -Entry point
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char xy = 'z';
	
	while (xy <= 'a')
	{
		putchar(xy);
		xy++;
	}
	putchar('\n');
	return (0);
}
