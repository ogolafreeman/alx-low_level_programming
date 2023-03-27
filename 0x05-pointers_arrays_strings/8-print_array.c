#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return_ a and n inputs
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n -1); x++)
	{
		printf("%d", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
