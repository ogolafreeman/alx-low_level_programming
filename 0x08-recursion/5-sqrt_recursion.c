#include "main.h"

int helper_sqrt_recursion(int n, int x);
/**
 * _sqrt_recursion - returns the naturl square root of a number
 * @n: number to calulate the square root
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_sqrt_recursion(n, 0));
}
/**
 * helper_sqrt_recursion - recursion to find the natural root a number
 * @n: number to calculate square root
 * @x: iterator
 *
 * Return: the square root
 */
int helper_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (helper_sqrt_recursion(n, x + 1));
}
