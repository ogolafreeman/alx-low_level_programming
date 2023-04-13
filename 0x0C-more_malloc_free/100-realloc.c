#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: poiter to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	p2 = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			p1[x] = p2[x];
	}
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			p1[x] = p2[x];
	}
	free(ptr);
	return (p1);
}
