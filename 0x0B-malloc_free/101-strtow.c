#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function count the number of words in string
 * @s: sting to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int o, c, d;

	o = 0;
	d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			o = 0;
		else
			if (o == 0)
			{
				o = 1;
				d++;
			}
	}
	return (d);
}
/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings
 * or return NULL (Erro)
 */
char **strtow(char *str)
{
	char **trq, *typ;
	int x, y = 0, m = 0, n, c = 0, begin, finish;

	while (*(str + m))
		m++;
	n = count_word(str);
	if (n == 0)
		return (NULL);
	trq = (char **) malloc(sizeof(char *) * (n + 1));
	if (trq == NULL)
		return (NULL);
	for (x = 0; x <= m; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				finish = x;
				typ = (char *) malloc(sizeof(char *) * (c + 1));
				if (typ == NULL)
					return (NULL);
				while (begin < finish)
					*typ++ = str[begin++];
				*typ = '\0';
				trq[y] = typ - c;
				y++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = x;
	}
	trq[y] = NULL;
	return (trq);
}
