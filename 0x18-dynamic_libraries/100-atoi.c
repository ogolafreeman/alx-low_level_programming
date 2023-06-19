#include "main.h"
/**
 * _atoi - converst a string to an int
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, e, f, g;

	a = 0;
	b = 0;
	c = 0;
	e = 0;
	f = 0;
	g = 0;

	while (s[e] != '\0')
		e++;
	while (a < e && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			g = s[a] - '0';
			if (b % 2)
				g = -g;
			c = c * 10 + g;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
