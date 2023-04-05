#include "main.h"

int def_prime(int n, int o);

/**
 * is_prime_number - tells if an integer is a prime or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (def_prime(n, n - 1));
}
/**
 * def_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @o: number for iteratir
 *
 * Return: 1 if n is prime and 0 if not
 */
int def_prime(int n, int o)
{
	if (o == 1)
	{
		return (1);
	}
	if (n % o == 0 && 0 > 0)
	{
		return (0);
	}
	return (def_prime(n, o - 1));
}
