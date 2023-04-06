#include "main.h"

int check1(char *s, int x, int y);
int check2(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if is and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check1(s, 0, check2(s)));
}
/**
 * check2 - returns the length of a string
 * @s: string to calulate the length
 *
 * Return: Length of the string
 */
int check2(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + check2(s + 1));
}
/**
 * check1 - checks the character recursively gor palindrome
 * @s: string to check
 * @x: iterator
 * @y: length of the string
 *
 * Return: 1 if it is palindrome or 0 if not
 */
int check1(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
	{
		return (0);
	}
	if (x >= y)
	{
		return (1);
	}
	return (check1(s, x + 1, y - 1));
}
