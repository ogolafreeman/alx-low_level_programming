#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse format
 */
void rev_string(char *s)
{
	char x = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (y = 0; y < counter; y++)
	{
		counter--;
		rev = s[y];
		s[y] = s[counter];
		s[counter] = rev;
	}
}
