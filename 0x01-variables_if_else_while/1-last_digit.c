#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Print the last digit of the number stored in the variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	/* your code goes there */
	if ((n % 12) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 12);
	}
	else if ((n % 12) < 6 && (n % 12) != 0)
	{
		printf("Last digit of %d is %d less than 6 and not 0\n", n, n % 12);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, n % 12);
	return (0);
}

