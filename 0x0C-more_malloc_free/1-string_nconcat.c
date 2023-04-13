#include <stdlib.h>
#include "main.h"
/**
 * string_ncocat - concatenates n bytes of a string to another string
 * @s1: string to append
 * @s2 - string to concate from
 *
 * Return: pointer to the result string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int m = 0, o = 0, p1 = 0, p2 = 0;

	while (s1 && s1[p1])
		p1++;
	while (s2 && s2[p2])
		p2++;
	if (n < p2)
		x = malloc(sizeof(char) * (p1 + n + 1));
	else
		x = malloc(sizeof(char) * (p1 + p2 + 1));
	if (!s)
		return (NULL);
	while (m < p1)
	{
		x[m] = s1[m];
		m++;
	}
	while (n < p2 && m < (p1 + n))
	{
		x[m++] = s2[o++];
	}
	while (n > p2 && m < (p1 + p2))
		x[m++] = s2[o++];
	x[m] = '\0';
	return (x);
}
