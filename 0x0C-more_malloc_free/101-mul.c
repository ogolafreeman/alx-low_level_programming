#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * errors - handles all errors in main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiple two positive numbers
 * @arg: number of arguments
 * @avg: arrays of arguments
 *
 * Return: always 0
 */
int main(int arg, char *avg[])
{
	char *m1, *m2;
	int p, p1, p2, a, cry, d1, d2, *rst, b = 0;

	m1 = avg[1], m2 = avg[2];

	if (arg != 3 || !is_digit(m1) || !is_digit(m2))
		errors();
	p1 = _strlen(m1);
	p2 = _strlen(m2);
	p = p1 + p2 + 1;
	rst = malloc(sizeof(int) * p);
	if (!rst)
		return (1);
	for (a = 0; a <= p1 + p2; a++)
		rst[a] = 0;
	for (p1 = p1 - 1; p1 >= 0; p1--)
	{
		d1 = m1[p1] - '0';
		cry = 0;
		for (p2 = _strlen(m2) - 1; p2 >= 0; p2--)
		{
			d2 = m2[p2] - '0';
			cry += rst[p1 + p2 + 1] + (d1 * d2);
			rst[p1 + p2 + 1] = cry % 10;
			cry /= 10;
		}
		if (cry > 0)
			rst[p1 + p2 + 1] += cry;
	}
	for (a = 0; a < p - 1; a++)
	{
		if (rst[a])
			b = 1;
		if (b)
			_putchar(rst[a] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(rst);
	return (0);
}
