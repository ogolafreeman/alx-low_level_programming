#include "main.h"
/**
 * append_text_to_file - it appends text at the end of a file
 * @filename: name of the file which is pointed
 * @text_content: a string to be added at the end of the line
 *
 * Return: incase the function fails or the filename is NULL --1
 * and if the file does not exist the user lacks write permissions
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int paris, mark, zee = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (zee = 0; text_content[zee];)
			zee++;
	}

	paris = open(filename, O_WRONLY | O_APPEND);
	mark = write(paris, text_content, zee);

	if (paris == 1 || mark == -1)
		return (-1);

	close(paris);

	return (1);
}
