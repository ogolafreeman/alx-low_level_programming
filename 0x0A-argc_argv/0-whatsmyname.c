#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of argument
 * @argv: arrays or arguments
 *
 * Return: Always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
