#include "lists.h"

/**
 * print_listint - prints all the elements of linked list
 * @h: linked list of type listint_t print
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d", h->);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
