#include "main.h"

char *create_buff(char *file);
void exit_file(int xft);

/**
 * create_buff - Allocate 1024 bytes for a buffer
 * @file: name of the storage buffer
 *
 * Return: a pointer for the newly allocated buffer
 */
char *create_buff(char *file)
{
	char *colo;

	colo = malloc(sizeof(char) * 1024);

	if (colo == NULL)
	{
		dprintf(STDERR_FILENO,
				"Erro: Can't write to %s\n", file);
		exit(99);
	}
	return (colo);
}
/**
 * exit_file - closes file descriptors
 * @xft: the file descriptor to be closed
 */
void exit_file(int xft)
{
	int x;

	x = close(xft);

	if (x == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Cant close xft %d\n", xft);
		exit(100);
	}
}
/**
 * main - it coppies the content of a file to another file
 * @arg: the number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if success
 *
 * Description: exit code 97 - if the argument count is incorrect
 * exit code 98 - file_from does not exist or cannot be read
 * exit code 99 - if the file_to cannot be created or written to
 * exit code 100 - if file_to or file_from cannot be closed
 */
int main(int arg, char *argv[])
{
	int strt, dest, red, wrt;
	char *buff;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: copy file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	strt = open(argv[1], O_RDONLY);
	red = read(strt, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (strt == -1 || red == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %sn", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(dest, buff, red);

		if (dest == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Cant write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		red = read(strt, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (red > 0);

	free(buff);
	exit_file(strt);
	exit_file(dest);

	return (0);
}
