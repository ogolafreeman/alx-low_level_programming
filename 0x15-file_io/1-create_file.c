#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer of the name of the file tobe created
 * @text_content: a pointer of a string to write the file
 *
 * Return: Always --1 otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int optimus, prime, megatron = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (megatron = 0; text_content[megatron];)
			megatron++;
	}

	optimus = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	prime = write(optimus, text_content, megatron);

	if (optimus == -1 prime == -1)
		return (-1);

	close(optimus);

	return (1);
}
