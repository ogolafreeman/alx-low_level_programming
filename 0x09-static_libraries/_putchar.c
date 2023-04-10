#include "main.h"
#include<unistd.h>

/**
 * _putchar - writes the charachter c to stdout
 * @c: The character to print
 * Return: Always 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
