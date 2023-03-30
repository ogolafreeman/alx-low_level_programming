#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int alx = 0;

	while (str[alx])
	{
		while (!(str[alx] >= 'a' && str[alx] <= 'z'))
			alx++;

		if (str[alx - 1] == ' ' ||
		    str[alx - 1] == '\t' ||
		    str[alx - 1] == '\n' ||
		    str[alx - 1] == ',' ||
		    str[alx - 1] == ';' ||
		    str[alx - 1] == '.' ||
		    str[alx - 1] == '!' ||
		    str[alx - 1] == '?' ||
		    str[alx - 1] == '"' ||
		    str[alx - 1] == '(' ||
		    str[alx - 1] == ')' ||
		    str[alx - 1] == '{' ||
		    str[alx - 1] == '}' ||
		    alx == 0)
			str[alx] -= 32;

		alx++;
	}

	return (str);
}

