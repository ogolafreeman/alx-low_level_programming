#include "main.h"

/**
 * read_textfile - Read test file to print STDOUT
 * @filename: text of file being read
 * @letters: number of letters to be read
 *
 * Return: w- actual number of bytes read & printed or 
 * 0 when function fails/filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *roti;
	ssize_t ant;
	ssize_t man;
	ssize_t wasp;

	ant = open(filename, O_RDONLY);

	if (ant == -1)
		return (0);
	roti = malloc(sizeof(char) * letters);
	wasp = read(ant, roti, letters);
	man = write(STDOUT_FILENO, roti, wasp);

	free(roti);
	close(ant);
	return(man);
}
