#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of argument
 * @argv: arrays or arguments
 * __attribute__((unused)) - Used to compile functions with unused variables
 * and parameters
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
