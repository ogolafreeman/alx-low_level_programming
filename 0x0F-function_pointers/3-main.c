#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the results of operations
 * @arg: numeber of arguments supplied to the program
 * @avg: Array of pointers to the arguments
 *
 * Return: Always 0
 */
int main(int __attribute__((__unsed__)) arg, char *avg[])
{
	int n1, n2;
	char *op;

	if (arg != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(avg[1]);
	op = avg[2];
	n2 = atoi(avg[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(n1, n2));
	return (0);
}
