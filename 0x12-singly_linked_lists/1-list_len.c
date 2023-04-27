#include "lists.h"
#include <stdlib.h>
/**
 * list_len - return number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	do {
		x++;
		h = h->next;
	} while (h);
	return (x);
}
