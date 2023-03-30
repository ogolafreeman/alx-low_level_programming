#include "main.h"
/**
 * string_toupper - change all lowercase to upper
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\n')
	{
		if (n[x] >= 'a' && n[x] <= 'Z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
