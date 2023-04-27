#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elemets of linked list
 * @h: pointer to the list_t to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		s++;
		h = h->next;
	}
	return (s);
}
