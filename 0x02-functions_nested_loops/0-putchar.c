#include "main.h"
#include<unistd.h>
/**
 * main - Entry point
 *
 * return: on success 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
